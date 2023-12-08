/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<ctype.h>

int main(){
    char continuar[50];
    printf("ingrese la frase a convertir: ");
    scanf("%s",continuar);
    for (int i = 0; continuar[i]; i++) { //se pone asi para hacerlo con cada caracter,posiciones
        continuar[i] = tolower(continuar[i]);
    }
    printf("%s",continuar);
}

