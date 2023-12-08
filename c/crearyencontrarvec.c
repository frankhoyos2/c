/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main()
{
    int vnum[10],ingresado;
    srand(time(NULL));
    for(int i=0;i<10;i++){
        vnum[i]= rand()%101;
        printf("%i ",vnum[i]);
    }
    printf("ingrese un numero: ");
    scanf("%i",&ingresado);
    for(int i=0;i<10;i++){
        if(ingresado==vnum[i]){
            printf("el numero se encontro en la posicion %i",i);
            break;
        }else{
            if(i==9){
                printf("el numero no se encontro en el vector");
            }
        }
    }
}


