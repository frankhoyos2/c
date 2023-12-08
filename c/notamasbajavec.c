/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void main()
{
    float parcial[4],numor;
    for(int i=0;i<4;i++){
        printf("ingrese nota: ");
        scanf("%f",&parcial[i]);
    }
    numor=parcial[0];
    for(int i=0;i<4;i++){
        if(numor>parcial[i]){
            numor=parcial[i];
        }
        
    }
    printf("la nota mas baja es: %f",numor);
    
}

