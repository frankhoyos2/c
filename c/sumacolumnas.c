/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main(){
    int columnas[3][4],suma,colum=1;
    srand(time(NULL));
    for(int f=0;f<3;f++){
        for(int c=0;c<4;c++){
            columnas[f][c]=rand()%11;
            printf("%i ",columnas[f][c]);
        }
        printf("\n");
        
    }
    for(int c=0;c<4;c++){
        for(int f=0;f<3;f++){
            suma+=columnas[f][c];
            
        }
        printf("la suma de la columna %i es %i",c+1,suma);
        printf("\n");
        suma=0;
        
    }
    

}



