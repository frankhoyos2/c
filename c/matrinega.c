/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(){
    int nega[2][3];
    for(int f=0;f<2;f++){
        for(int c=0;c<3;c++){
            printf("ingrese un numero: ");
            scanf("%i",&nega[f][c]);
            if(nega[f][c]>0){
                nega[f][c]=-nega[f][c];
                
            }
            
        }
        
    }
    for(int f=0;f<2;f++){
        for(int c=0;c<3;c++){
            printf("%i ",nega[f][c]);
        }
        printf("\n");
        
    }
}
