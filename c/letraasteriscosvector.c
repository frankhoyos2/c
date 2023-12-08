/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>//strcpy(vectorPalabra, palabra);Copiar la palabra al vectorPalabra
void main(){
    char vectorPalabra[5]="apple";
    char vectorAsteriscos[5] = {'*', '*', '*', '*', '*'};
    char letraUsuario;
    printf("Ingresa una letra: ");
    scanf(" %c", &letraUsuario);
    for (int i = 0; i < 5; i++) {
        if (vectorPalabra[i] == letraUsuario) {
            vectorAsteriscos[i] = letraUsuario;
        }
    }
    printf("Vector de asteriscos: ");//se pone afuera para evitar repetir dentro del bucle,se pone junto por no tenr salto
    for (int i = 0; i < 5; i++) {
        printf(" %c", vectorAsteriscos[i]);
    }

}
