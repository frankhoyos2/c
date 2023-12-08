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
    int matr1[2][3],matr2[2][3],matriresul[2][3];
    srand(time(NULL));
    for(int f=0;f<2;f++){
        for(int c=0;c<3;c++){
            matr1[f][c]=rand()%11;
            matr2[f][c]=rand()%11;
            matriresul[f][c]=matr1[f][c]+matr2[f][c];
        }
    }
    for(int f=0;f<2;f++){
        for(int c=0;c<3;c++){
            printf("%i ",matriresul[f][c]);
       }
       printf("\n");
    }
}



