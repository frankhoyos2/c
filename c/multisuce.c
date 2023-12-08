/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void main(){
    int num1,num2,produc;
    printf("ingrese el numero: ");
    scanf("%i",&num1);
    printf("ingrese el segundo: ");
    scanf("%i",&num2);
    for(int i=0;i<num2;i++){
        produc=produc+num1;
    }
    printf("la multiplicacion es: %i",produc);
}