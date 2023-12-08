/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>//permite el uso de sytem(clear)
#include <string.h>//permite el uso de strcpy,reamplazo
/*crear un programa que el usuario ingrese los datos y el algoritmo a usar.Luego,
si el elemento no se encuentra mostrar en pantalla*/
int vecor[10],deseado,opc;
char movi[15];
void algori();
void buble_sor(int aux);
void insertion_sor(int aux);
void selection_sor(int aux);
void comb_sor(int aux);
void binaria();
void main(){
    printf("\n--------------------------------------------------------------------------\n");
    printf("\tBienvenido al uso de algoritmos de ordenamiento y busqueda binaria\n");
    printf("----------------------------------------------------------------------------\n");
    for(int i=0;i<10;i++){
        printf("\n>ingrese nro %i: ",i+1);
        scanf("%i",&vecor[i]);
    }
    printf("\n>ingrese nro a buscar entre los numeros ingresados: ");
    scanf("%i",&deseado);
    system("clear");
    algori();
}
void algori(){
  
    char conf;
    int aux;
    printf("\n--------------------------------------------------------------------------\n");
    printf("\tElige el algoritmo de ordenamiento a utilizar\n");
    printf("----------------------------------------------------------------------------\n");
    printf("1.Bubble sort");
    printf("\n2.Insertion sort");
    printf("\n3.Selection sort");
    printf("\n4.Comb sort");
    printf("\n5.salir");
    printf("\n--->seleccione opcion: ");
    scanf("%i",&opc);
    system("clear");
    switch(opc){//se utiliza switch para facilitar la indicacion de opc y el llamado de las funciones que correspondan a cada proceso 
        case 1:
        
            strcpy(movi,"Bubble sort"); 
            buble_sor(aux);
            

            break;
        case 2:
        
            strcpy(movi,"Insertion sort"); 
            insertion_sor(aux);
   

            break;
        case 3:
            strcpy(movi,"Selection sort"); 
            selection_sor(aux);
         

            break;
        case 4:
            strcpy(movi,"Comb sort"); 
            comb_sor(aux);
            
            break;
        case 5:
            break;
        default:
            printf("--->seleccione opcion: %i",opc);
            printf("\n*error: la opcion no existe ");
            printf("\n--->Intentar de nuevo?(s/n): ");
            scanf(" %c",&conf);
            if(conf=='s'){
                system("clear");
                algori();
            
            }
        
    }
    
}
void buble_sor(int aux){
    int ord=0,i=1;
    while(i<10 && ord==0){
        i=i+1;
        ord=1;
        for(int j=0;j<=10-i;j++){
            if(vecor[j]>vecor[j+1]){
                ord=0;
                aux=vecor[j];
                vecor[j]=vecor[j+1];
                vecor[j+1]=aux;
                
            }
            
        }
        
    }
    binaria();
    
}
void insertion_sor(int aux){
    int j;
    for(int i=1;i<10;i++){
        aux=vecor[i];
        j=i-1;
        while(j>=0 && vecor[j]>aux){
            vecor[j+1]=vecor[j];
            vecor[j]=aux;
            j--;
            
        }
        
    }
    binaria();
}
void selection_sor(int aux){
    int min;
    for(int i=0;i<9;i++){
        min=i;
        for(int j=i+1;j<10;j++){
            if(vecor[j]<vecor[min]){
                min=j;
                
            }
            
        }
        aux=vecor[i];
        vecor[i]=vecor[min];
        vecor[min]=aux;
    }
    binaria();
    
}
void comb_sor(int aux){
    int gap=7, permutar=1, temp;
         
    while(permutar==1 && gap>1){
        permutar=0;
        gap=gap-1;
        if(gap<1){
            gap=1;
        }
        for(int i=0; i<10-gap; i ++){
            if(vecor[i]> vecor[i+gap]){
                permutar=1;
                temp= vecor[i];
                vecor[i]= vecor[i+gap];
                vecor[i+gap]=temp;
            }
        }
         
        
    }
    binaria();

    
}

void binaria(){
    int li=0,ls=9,pos,encon=0;
    printf("--->Usted eligio la opcion %i",opc);
    printf("\n--->ALgoritmo %s\n",movi);
    printf("-->%i es el numero a buscar\n",deseado);
    printf("Vector ordenado: \n");
    for(int k=0;k<10;k++){
        if(k==9){
            printf(" %i",vecor[k]);
            
        }else{
            printf(" %i,",vecor[k]);
        }
        
        
        
    }
    printf("\n-------Busqueda binaria--------");
    while(li<=ls){
        pos=(li+ls)/2;
        if(vecor[pos]==deseado){
            li=ls+1;
            encon=1;
            break;
            
        }else{
            if(deseado<vecor[pos]){
                ls=pos-1;
                
            }else{
                li=pos+1;
            }
        }
        
    }
    if(encon==1){
        printf("\n--> El numero esta en la posicion : %i.",pos);
        
    }else{
        printf("\n-->el numero no fue encontrado");
    }
    printf("\nFin.");
    
}





