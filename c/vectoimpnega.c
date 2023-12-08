/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void main()
{
    int vnum[10];
    for(int i=0;i<10;i++){
        printf("ingrese numero: ");
        scanf("%i",&vnum[i]);
    }
    for(int i=0;i<10;i++){
        if(vnum[i]<0){
            printf("%i ",vnum[i]);
        }
    }
}
