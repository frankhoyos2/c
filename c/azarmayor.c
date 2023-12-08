/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
void main(){
    int numeros[10];
    
    int mayor = 0; 
    srand(time(NULL));

   
    for (int i = 0; i < 10; i++) {
        numeros[i] = rand() % 100 + 1;
        printf("Ingresa el número %d: %d\n", i +1 , numeros[i]);//el mas uno es para que no cominece en cero el identifi

        if (numeros[i] > mayor) {
            mayor = numeros[i];
        }
    }
    printf("El número mayor ingresado es: %d\n", mayor);
}
