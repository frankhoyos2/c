

/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/*crear un programa con comb sort,permitir seleccionar el factor de reduccion en tres Escenarios.Ademas;
factor de reduccion de 1 se debe preguntar su inicializacion,mostrar en pantalla cada vez que 
realice un movimientos o intercambios de los elementos.Cada iteracion gap=gap/1.3;*/
#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int scenarios[3][10] = {{1, 2, 3, 4, 5, 6, 7, 8, 9, 10},{10,9, 8, 7, 6, 5, 4, 3, 2, 1},{7, 9, 1, 5, 3, 6, 0, 2, 8, 4}};
int opcion,comparaciones,intercambios;
int vecor[10],vector2[10],introducc;
void reduccion();
void actualizar();
void comb_sor(int aux,float freduccion);
void historial();
void alterar();
void confirmar();
void comb_sor2(int n);
void main(){
    char conf;
   
    printf("--->Escenarios de complejidad: \n");
    printf("1. Mejor escenario: {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; \n");
    printf("2. Peor escenario: {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};\n");
    printf("3. Caso promedio: {7, 9, 1, 5, 3, 6, 0, 2, 8, 4};\n");
    printf("Seleccione el escenario: ");
    scanf("%d", &opcion);
    switch (opcion) {
        case 1:
            actualizar();
            break;
        case 2:
            actualizar();
            break;
        case 3:
            actualizar();
            break;
        default:
            system("clear");
            printf("--->seleccione opcion: %i",opcion);
            printf("\n*error: la opcion no existe ");
            printf("\n--->Intentar de nuevo?(s/n): ");
            scanf(" %c",&conf);
            if(conf=='s'){
                system("clear");
                main();
            
            }
            
           
    }
    
   
}

void actualizar(){
    opcion=opcion-1;
    for(int i=0;i<10;i++){
        vecor[i]=scenarios[opcion][i];
        vector2[i]=scenarios[opcion][i];
    }
    system("clear");
    reduccion();
}
void reduccion(){
    int aux,freduc;
    float freduccion,fraccion[3]={1.2,1.3,1.5};
    char conf;
    printf("-->vector seleccionado: \n");
    for(int i=0;i<10;i++){
        if(i==9){
            printf(" %i",vecor[i]);
            
        }else{
            printf(" %i,",vecor[i]);
        }
        
    }
    printf("\n1. 1.2\n");
    printf("2. 1.3\n");
    printf("3. 1.5\n");
    
    printf("\n--->Selecciona el factor de reduccion: ");
    scanf("%i",&freduc);
    if(freduc<4 && freduc>0){
        freduc = freduc - 1;
        freduccion=fraccion[freduc];
        system("clear");
        comb_sor(aux,freduccion);
        
    }else{
        system("clear");
        printf("--->seleccione opcion: %i",freduc);
        printf("\n*error: la opcion no existe ");
        printf("\n--->Intentar de nuevo?(s/n): ");
        scanf(" %c",&conf);
        if(conf=='s'){
            system("clear");
            reduccion();
            
        }
        
    }
    
}

void comb_sor(int aux,float freduccion){
    int gap=10/freduccion, permutar=1, temp;
    char permitir;
    
   printf("historial de movimientos del vector\n");
   while(permutar==1 && gap>=0){
       
        permutar=0;
        gap=gap-1;
        while(gap<=0){
            confirmar();
            gap=introducc;
            
        }
        
        for(int i=0; i<10-gap; i ++){
            comparaciones++;
            if(vecor[i]> vecor[i+gap]){
                permutar=1;
                temp= vecor[i];
                vecor[i]= vecor[i+gap];
                vecor[i+gap]=temp;
                intercambios++;
                for(int i=0;i<10;i++){
                    
                    printf("%i",vecor[i]);
                }
                printf("\n");
            }
            
        }
        gap /= freduccion;
         
        
    }
    for(int i=0;i<10;i++){
      vector2[i]=vecor[i];
    }
    historial();
    
}
void historial(){
    printf("\n--->Vector ordenado: ");
    for(int i=0;i<10;i++){
        printf("%i",vecor[i]);
    }
    printf("\n-->se hizo %i comparaciones y %i intercambios", comparaciones,intercambios);

}
void confirmar(){
    char conf;
    printf("Desea introducir la reduccion: ");
    scanf("%c",&conf);
    if(conf=='s'){
        alterar();
    }else{
        introducc=1;
    }
}
void alterar(){
    int opc3,resultado;
    char conf;
    printf("\n1. 7\n");
    printf("2. 6\n");
    printf("3. 4\n");
    printf("Seleccione reduccion: ");
    scanf("%i",&opc3);
  
    switch (opc3){
        case 1:
            introducc=7;
            comb_sor2(introducc);
            break;
        case 2:
            introducc=6;
            comb_sor2(introducc);
            break;
        case 3:
            introducc=4;
            comb_sor2(introducc);
            break;
        default:
            printf("--->seleccione opcion: %i",opc3);
            printf("\n*error: la opcion no existe ");
            printf("\n--->Intentar de nuevo?(s/n): ");
            scanf(" %c",&conf);
            if(conf=='s'){
                 alterar();
                
            }
            
        }
    
    
    
}
void comb_sor2(int n){
    int gap=n, permutar=1, temp;
    while(permutar==1 && gap>1){
        permutar=0;
        gap=gap-1;
        if(gap<1){
            gap=1;
        }
        for(int i=0; i<10-gap; i ++){
             comparaciones++;
            if(vector2[i]> vector2[i+gap]){
                permutar=1;
                temp= vecor[i];
                vector2[i]= vector2[i+gap];
                vector2[i+gap]=temp;
                intercambios++;
            }
        }
        gap /= n;
        for(int i=0;i<10;i++){
            vecor[i]=vector2[i];
        }  
        
    }
    


    
}



















