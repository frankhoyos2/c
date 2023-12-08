/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void main(){
    int multideseis[2][3],multi=6;
    for(int f=0;f<2;f++){
        for(int c=0;c<3;c++){
            multideseis[f][c]=multi;
            multi=multi+6;
            printf("%i ",multideseis[f][c]);
        }
        printf("\n");
        
    }
}
