/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void login();//corresponde a ingresar el usuario y comparar los datos del archio.linea 4
void menu();//opciones de movimientos.linea 67
void intentardenu();//cunado se pasa del rango
void realizardenu();//al terminar un proceso 
void listacuentas(int opc);//universal,se utiliza hasata la opcion 3.Muestra la matriz
void acciondepo(int cuenta,int monto);//linea 130
void accionreti(int cuenta,int monto);//linea 167
void acciotrans();//linea 198
void historial(int monto,int cuenta,int pos);//se comparte con deposito y transferencia
void historial2(int monto,int cuenta,int pos);//retirar
FILE *fc;//archivo para usuario y contraseña
FILE *fcon;//archivo para movimientos.
char usua[5],usingrsa[5];
char movi[20],conf;// se pone global movi para uitlizarlo para completar en el historial y mostrar el proceso en las listas de las cuentas
int contr,coningre;
int cuentas[3][3]={{12345,1,1500},{56789,1,3800},{98765,2,7400}};//se pone glopal para que en cualquier funcion afecte direcrtamente el contenido
void main(){
    fc=fopen("usuariocontra","r");
    if(fc==NULL){
        printf("\nno se pudo abrir el archivo");
    }
    fscanf(fc,"%s",usua);//se obtiene el dato en el archivo
    fscanf(fc,"%i",&contr);
    fclose(fc);
    
    login();//solo hay esta funcion en la principal,ya que las otras son en cascadas,es decir,una llama a otra.
    
}
void login(){
    printf("----------------------------\n");
    printf("\tLogin\n");
    printf("----------------------------");
    printf("\n--->ingrese usuario: ");
    scanf("%s",usingrsa);
    printf("\n--->ingrese contraseña: ");
    scanf("%i",&coningre);
    getchar();
    int resultado=strcmp(usingrsa,usua);
    if(contr==coningre && resultado==0 ){
        system("clear");
        menu();//introduce correctamente 
        
    }else{
        printf("**error:user o password incorecto");
        printf("\n--->Intentar de nuevo?(s/n): ");
        scanf("%c",&conf);
        if(conf=='s'){
            system("clear");
            login();//mostrar de nuevo 
            
        }
            
            
    }
}
void menu(){
    int opc,nucuenta,canti;
    //opc sirve para indicar la opcion y movi para mostrar el texto de la seleccion 
    printf("\n----------------------------\n");
    printf("\tBanco Progiibank\n");
    printf("----------------------------\n");
    printf("1.Depositar");
    printf("\n2.Retirar");
    printf("\n3.Transferir");
    printf("\n4.Lista cuentas");
    printf("\n5.salir");
    printf("\n--->seleccione opcion: ");
    scanf("%i",&opc);
    system("clear");
    switch(opc){//se utiliza switch para facilitar la indicacion de opc y el llamado de las funciones que correspondan a cada proceso 
        case 1:
            strcpy(movi, "deposito"); 
            listacuentas(opc);
            printf("\n>ingrese nro de cuenta: ");
            scanf("%i",&nucuenta);
            printf("\n>ingrese cantidad de depositar: ");
            scanf("%i",&canti);
            acciondepo(nucuenta,canti);
            break;
        case 2:
            strcpy(movi, "retiro"); 
            listacuentas(opc);
            printf("\n>ingrese nro de cuenta: ");
            scanf("%i",&nucuenta);
            printf("\n>ingrese cantidad a retirar: ");
            scanf("%i",&canti);
            accionreti(nucuenta,canti);
            break;
        case 3:
            strcpy(movi, "transferencia"); 
            listacuentas(opc);
            acciotrans();
            break;
        case 4:
            listacuentas(opc);
            realizardenu();
            break;
        case 5:
            break;
        default:
            printf("--->seleccione opcion: %i",opc);
            printf("\n*error: la opcion no existe ");
            intentardenu();
        
        
    }
}
void listacuentas(int opc){
    printf("--->seleccione opcion: %i",opc);
    if(opc<4){
        printf("\n--->vas a realizar %s",movi);//permite reutilizar y no altera si es solo es para mostrar las cuentas
    }
    printf("\n> cuentas dispinibles: ");
    printf("\nel Nro cuenta: %i-cuenta ahorros-saldo: %i",cuentas[0][0],cuentas[0][2]);
    printf("\nel Nro cuenta: %i-cuenta ahorros-saldo: %i",cuentas[1][0],cuentas[1][2]);
    printf("\nel Nro cuenta: %i-cuenta corriente-saldo: %i",cuentas[2][0],cuentas[2][2]);
    
}
void acciondepo(int cuenta,int monto){
    int compo,pos;
    char conf[1];
    for(int f=0;f<3;f++){
        if(cuentas[f][0]==cuenta){
            compo=0;
            pos=f;
            break;//para que no pregunte en el resto del recorrido,para la lectura.
                
            }else{
                if(f==2){//se pone esta condcion ya que en el anterior si cumple llega al dos y se sale
                    system("clear");
                    printf(">la cuenta no existe");
                    intentardenu();
                    
                }
                
                
                    
            }
    }
    
    if(compo==0 && monto>0){
        cuentas[pos][2]=cuentas[pos][2]+monto;
        historial(monto,cuenta,pos);
        
        
    }else{
        system("clear");
        printf("*eror: el monto debe ser mayor a cero");
        intentardenu();
    }
    
}
void accionreti(int cuenta,int monto){
    int compo,pos;
    char conf[1];
    for(int f=0;f<3;f++){
        
        if(cuentas[f][0]==cuenta){
            compo=0;
            pos=f;
             break;
                
        }else{
            if(f==2){
                system("clear");
                printf(">la cuenta no existe");
                intentardenu();
                }
            }
            
        
    }
    if(compo==0 && (cuentas[pos][2]>=monto && monto>0)){
        cuentas[pos][2]=cuentas[pos][2]-monto;
        historial2(monto,cuenta,pos);
        
        
    }else{
        system("clear");
        printf("*error:el monto debe ser mayor a cero o no puede superar el saldo");
        intentardenu();
    }
}
void acciotrans(){
    int nucuentaor1,cuenta,pos,pos1,compo,compo1,monto;
    printf("\n>ingrese nro de cuenta origen: ");
    scanf("%i",&nucuentaor1);
    printf("\n>ingrese nro de cuenta destino : ");
    scanf("%i",&cuenta);
    printf("\n>ingrese cantidad a retirar: ");
    scanf("%i",&monto);
    for(int f=0;f<3;f++){
        
        if(cuentas[f][0]==nucuentaor1){
            compo1=0;
            pos1=f;
            break;
                
        }else{
            if(f==2){
                system("clear");
                printf(">la cuenta no existe");
                acciotrans();
            }
        }
            
        
    }
    for(int f=0;f<3;f++){
        if(cuentas[f][0]==cuenta){
            compo=0;
            pos=f;
            break;
                
        }else{
            if(f==2){
                system("clear");
                printf(">la cuenta no existe");
                acciotrans();
            }
        }
            
        
    }
    if(compo1==0 && (monto<=cuentas[pos1][2] && monto>0)){
        cuentas[pos1][2]=cuentas[pos1][2]-monto;//se resta a la cuenta origen
        cuentas[pos][2]=cuentas[pos][2]+monto;
        historial(monto,cuenta,pos);
        
    }else{
        system("clear");
        printf("*error:el monto debe ser mayor cero  o no puede superar el saldo");
        intentardenu();
    }
}
void historial(int monto,int cuenta,int pos){
    int anterior;
    anterior=cuentas[pos][2]-monto;//permite mostrar el saldo anterior,teniendo en cuenta el monto
    fcon=fopen("movimientos.txt","a");
    if(fcon==NULL){
        printf("\nno se pudo abrir el archivo");
        
    }
    fprintf(fcon,"\n--->resumen del movimiento");
    fprintf(fcon,"\naccion %s",movi);
    fprintf(fcon,"\nNrocuenta: %i",cuenta);
    if(cuentas[pos][1]==1){
        fprintf(fcon,"\ncuenta de ahorros");
        
    }else{
        fprintf(fcon,"\ncuenta corriente");
    }
    fprintf(fcon,"\nsaldo anterior: %i",anterior);
    fprintf(fcon,"\nnuevo saldo: %i",cuentas[pos][2]);
    
    fclose(fcon);
    system("clear");
    printf("\n--->resumen del movimiento");
    printf("\naccion %s",movi);
    printf("\nNrocuenta: %i",cuenta);
    if(cuentas[pos][1]==1){
        printf("\ncuenta de ahorros");
        
    }else{
        printf("\ncuenta corriente");
    }
    printf("\nsaldo anterior: %i",anterior);
    printf("\nnuevo saldo: %i",cuentas[pos][2]);
    realizardenu();
    
    
}
void historial2(int monto,int cuenta,int pos){
    int original;
    original=cuentas[pos][2]+monto;//es el mismo metedo que el anterior.linea 253.
    fcon=fopen("movimientos.txt","a");
    fprintf(fcon,"\n--->resumen del movimiento");
    if(fcon==NULL){
        printf("\nno se pudo abrir el archivo");
        
    }
    fprintf(fcon,"\naccion %s",movi);
    fprintf(fcon,"\nNrocuenta: %i",cuenta);
    if(cuentas[pos][1]==1){
        fprintf(fcon,"\ncuenta de ahorros");
        
    }else{
        fprintf(fcon,"\ncuenta corriente");
    }
    fprintf(fcon,"\nsaldo anterior: %i",original);
    fprintf(fcon,"\nnuevo saldo: %i",cuentas[pos][2]);
    
    fclose(fcon);
    system("clear");
    printf("\n--->resumen del movimiento");
    printf("\naccion %s",movi);
    printf("\nNrocuenta: %i",cuenta);
    if(cuentas[pos][1]==1){
        printf("\ncuenta de ahorros");
        
    }else{
        printf("\ncuenta de ahorros");
    }
    printf("\nsaldo anterior: %i",original);
    printf("\nnuevo saldo: %i",cuentas[pos][2]);
    realizardenu();
    
    
}
void intentardenu(){
    printf("\n--->Intentar de nuevo?(s/n): ");
            scanf(" %c",&conf);
            if(conf=='s'){
                system("clear");
                menu();
            
            }
}
void realizardenu(){
    printf("\n--->Deseas realizar otra operacion?(s/n): ");
    scanf(" %c",&conf);
    if(conf=='s'){
        system("clear");
        menu();
            
    }
    
}