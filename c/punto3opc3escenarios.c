/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/*crear un programa que implemente bubble sort,insertion sort,seleccion sort a una funcion 
cada uno.Mostrar en pantalla el numero de comparaciones e intercambios que hace sobre los datos en los 
vectores que presenten los 3 escenarios*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int esce[3][10] = { {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},{10, 9, 8, 7, 6, 5, 4, 3, 2, 1},{7, 9, 1, 5, 3, 6, 0, 2, 8, 4}};
int vecor[10];
int intercambios=0,comparaciones=0,aux,opcion2;
char movi[15];
void buble_sor(int aux);
void insertion_sor(int aux);
void selection_sor(int aux);
void menu();
void historial();
void actualizar();
int opcion;
int main() {
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
            printf("--->seleccione opcion: %i",opcion);
            printf("\n*error: la opcion no existe ");
            printf("\n--->Intentar de nuevo?(s/n): ");
            scanf(" %c",&conf);
            if(conf=='s'){
                system("clear");
                main();
            
            }
            
           
    }
    system("clear");
    menu();

    
}
void actualizar(){
    opcion=opcion-1;
    for(int i=0;i<10;i++){
        vecor[i]=esce[opcion][i];
    }
}
void menu(){
    char conf;
    int aux;
    printf("-->vector seleccionado: ");
    for(int i=0;i<10;i++){
        printf("%i",vecor[i]);
    }
    printf("\n--->Opciones de algoritmos de ordenamiento: \n");
    printf("1. Bubble Sort\n");
    printf("2. Insertion Sort\n");
    printf("3. Selection Sort\n");
    printf("\n-->Seleccione metodo de ordenamiento: ");
    scanf("%d", &opcion2);

    switch (opcion2) {
        case 1:
            strcpy(movi,"Bubble sort"); 
            system("clear");
            buble_sor(aux);
            historial();
            break;
        case 2:
            strcpy(movi,"Insertion sort");
            system("clear");
            insertion_sor(aux);
            historial();
            break;
        case 3:
            strcpy(movi,"Selection sort"); 
            system("clear");
            selection_sor(aux);
            historial();
            break;
        default:
            printf("--->seleccione opcion: %i",opcion2);
            printf("\n*error: la opcion no existe ");
            printf("\n--->Intentar de nuevo?(s/n): ");
            scanf(" %c",&conf);
            if(conf=='s'){
                system("clear");
                menu();
            
            }
            
    }

 
}

void buble_sor(int aux){
    int ord=0,i=1;
    while(i<10 && ord==0){
        i=i+1;
        ord=1;
        for(int j=0;j<=10-i;j++){
            comparaciones++;
            if(vecor[j]>vecor[j+1]){
                ord=0;
                aux=vecor[j];
                vecor[j]=vecor[j+1];
                vecor[j+1]=aux;
                intercambios++;
                for(int i=0;i<10;i++){
                    printf("%i",vecor[i]);
                }
                printf("\n");
            }
            
        }
        
    }

    
}
void insertion_sor(int aux){
    int j;
    for(int i=1;i<10;i++){
        aux=vecor[i];
        j=i-1;
        comparaciones++;
        while(j>=0 && vecor[j]>aux){
            vecor[j+1]=vecor[j];
            vecor[j]=aux;
            j--;
            intercambios++;
            for(int i=0;i<10;i++){
                printf("%i",vecor[i]);
            }
            printf("\n");
        }
        
    }
   
}
void selection_sor(int aux){
    int min;
    for(int i=0;i<9;i++){
        min=i;
        for(int j=i+1;j<10;j++){
            comparaciones++;
            if(vecor[j]<vecor[min]){
                min=j;
                
            }
            
        }
        aux=vecor[i];
        vecor[i]=vecor[min];
        vecor[min]=aux;
        intercambios++;
        for(int i=0;i<10;i++){
            printf("%i",vecor[i]);
        }
        printf("\n");
    }
}
void historial(){
    printf("--->Usted eligio la opcion %i",opcion2);
    printf("\n--->ALgoritmo %s\n",movi);
    printf("--->Vector ordenado: ");
    for(int i=0;i<10;i++){
        printf("%i",vecor[i]);
    }
    printf("\nSe hizo %i comparaciones y %i intercambios",comparaciones,intercambios);
    
    
}



