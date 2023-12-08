/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void aster();
void aster1();
int niveles=10;
int main() {
    aster();
    aster1();
    
   
}
void aster1(){
    for(int nivel = 0;nivel<=10;nivel++){
        for(int as=0;as<=nivel;as++ ){
            printf("*"); //hace uno y para poder seguir debe hacer el otro
        }
        for(int espa = 0;espa<=nivel;espa++){
            printf("l");//asi,va uno en uno
        }
        printf("\n");//da el salto el linea despues de emprimir los dos ciclos
        
    }
}
    

void aster(){
    
    for(int nivel = 0;nivel<=10;nivel++){
        for(int espa = 0;espa<=niveles;espa++){
            printf("l");//asi,va uno en uno
        }
        for(int as=0;as<=nivel;as++ ){
            printf("*"); //hace uno y para poder seguir debe hacer el otro
        }
        printf("\n");//da el salto el linea despues de emprimir los dos ciclos
        niveles=niveles-1;
        
        
        
    }

    
}











