/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void aste2();
int niveles=1;
int main() {
    
    for(int nivel = 10;nivel>=1;nivel--){
        for(int as=0;as<nivel;as++ ){
            printf("*"); //hace uno y para poder seguir debe hacer el otro
        }
        for(int espa = 0;espa<nivel;espa++){
            printf("l");//asi,va uno en uno
        }
        printf("\n");//da el salto el linea despues de emprimir los dos ciclos
        
    }
    aste2();
   
}
void aste2(){
    for(int nivel = 10;nivel>=1;nivel--){
        for(int espa = 0;espa<niveles;espa ++){
            printf("l");//asi,va uno en uno
        }
        for(int as=0;as<nivel;as++ ){
            printf("*"); //hace uno y para poder seguir debe hacer el otro
        }
        
        
        
        printf("\n");//da el salto el linea despues de emprimir los dos ciclos
        niveles=niveles+1;
        
    }
}


