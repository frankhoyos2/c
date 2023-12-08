/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void main()
{
    int vmult3[10],mult3;
    for(int i=1;i<=10;i++){
        mult3=i*3;
        vmult3[i-1]=mult3;
    }
    for(int i=0;i<10;i++){
        printf("%i ",vmult3[i]);
    }
}

