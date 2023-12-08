/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void main()
{
    int num1=0,num2=1;
    for(int i=0;i<10;i = i+2){
        printf("%i %i ",num1,num2);
        num1 = num1 + num2;
        num2 = num1 + num2; 
    }
}


