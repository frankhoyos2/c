/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void main(){
    int vec1[5],vec2[3],veconca[8];
    for(int i=0;i<5;i++){
        printf("ingrese numero: ");
        scanf("%i",&vec1[i]);
    }
    for(int l=0;l<3;l++){
        printf("ingrese numero: ");
        scanf("%i",&vec2[l]);
    }
    for(int i=0;i<5;i++){
        veconca[i]=vec1[i];
    }
    for(int i=5;i<8;i++){
        veconca[i]=vec2[i-5];
    }
    for(int k=0;k<8;k++){
        printf("%i ",veconca[k]);
    }
}
