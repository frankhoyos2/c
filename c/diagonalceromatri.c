/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void main(){
    int numero[4][4],ret=3;
    for(int f=0;f<4;f++){
        for(int c=0;c<4;c++){
            printf("ingrese un numero: ");
            scanf("%i",&numero[f][c]);
            if(f==c){
                numero[f][c]=0;
            }
            if(c==ret){
                numero[f][c]=0;
            }
        }
        ret-=1;
    }
    for(int f=0;f<4;f++){
        for(int c=0;c<4;c++){
            printf("%i ",numero[f][c]);
        }
        printf("\n");
    }
    
}
