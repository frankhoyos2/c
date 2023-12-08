/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
void main(){
    float altura,base,area;
    char continuar[2];
    do{
        printf("\ningrese la altura: ");
        scanf("%f",&altura);
        printf("\ningrese la base: ");
        scanf("%f",&base);
        area=(base*altura)/2;
        printf("\nel area es: %f",area);
        printf("\ndesesas continuar?: ");
        scanf("%s",continuar);
        for (int i = 0; i<continuar[2]; i++) {
        continuar[i] = tolower(continuar[i]);
    }
        
    }while(strcmp(continuar, "si") == 0);
}


