/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numeros[10];
    int mayor = 0; // Inicializamos mayor a 0, ya que todos los números son mayores o iguales a 0.

    // Inicializamos el generador de números aleatorios con la hora actual.
    srand(time(NULL));

    // Pedimos al usuario ingresar los 10 números aleatorios.
    for (int i = 0; i < 10; i++) {
        numeros[i] = rand() % 100 + 1; // Genera números aleatorios entre 1 y 100.
        printf("Ingresa el número %d: %d\n", i + 1, numeros[i]);

        // Comparamos el número ingresado con el mayor actual.
        if (numeros[i] > mayor) {
            mayor = numeros[i];
        }
    }

    // Mostramos el número mayor ingresado.
    printf("El número mayor ingresado es: %d\n", mayor);

    return 0;
}
