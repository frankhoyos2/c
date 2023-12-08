/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void main(){
    int trimes[4][3],suma,cont=1;
    for(int f=0;f<4;f++){
        for(int c=0;c<3;c++){
            printf("ingrese la venta del mes %i: ",cont);
            scanf("%i",&trimes[f][c]);
            suma+=trimes[f][c];
            cont+=1;
            
        }
        printf("la suma del trimestre es: %i",suma);
        printf("\n");
        suma=0;
    }

}
