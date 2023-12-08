/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void main(){
    int edades[2][3];
    for(int f=0;f<2;f++){
        for(int c=0;c<3;c++){
            printf("ingrese edad: ");
            scanf("%i",&edades[f][c]);
            
        }
        
    }
    for(int f=0;f<2;f++){
        for(int c=0;c<3;c++){
            printf("%i ",edades[f][c]);
            
        }
        printf("\n");
        
    }
    int t1=sizeof(edades);//toda la matriz,tamaño
    int t2=sizeof(edades[0]);//fila
    int t3=sizeof(edades[0][0]);//una sola casilla.
    int nc=t1/t3;
    int nf=t1/t2;
    int nco=t2/t3;
    printf("la cantidad de matriz es %i,la fila es %i,la casilla es %i en bytes",t1,t2,t3);
    printf("\nel numero de casillas de matriz es %i,el numero de filas es %i,el numero de columnas es %i en bytes",nc,nf,nco);

}

