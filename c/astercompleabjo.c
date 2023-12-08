/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int niv=1;
void aste2();
void main()
{
    aste2();
}
void aste2(){
    for(int nivel = 10;nivel>=1;nivel--){
        for(int espa = 0;espa<niv;espa ++){
            printf("l");//asi,va uno en uno
        }
        for(int as=0;as<nivel;as++ ){
            printf("*"); //hace uno y para poder seguir debe hacer el otro
        }
        for(int as=0;as<nivel;as++ ){
            printf("*"); //hace uno y para poder seguir debe hacer el otro
        }
        for(int espa = 0;espa<niv;espa ++){
            printf("l");//asi,va uno en uno
        }
        printf("\n");//da el salto el linea despues de emprimir los dos ciclos
        niv=niv+1;
        
    }
}
