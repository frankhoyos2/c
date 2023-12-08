/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int ingre();
void main(){
    int edades[5]={1,2,3,4,5};
    for(int i=0;i<5;i++){
        printf("%i ",edades[i]);
        
    }
    printf("\n");
    ingre();
}
int ingre(){
    int edade[5];
    for(int i=0;i<5;i++){
        printf("ingrese edade: ");
        scanf("%i",&edade[i]);
        
    }
    for(int i=0;i<5;i++){
        printf("%i ",edade[i]);
        
    }
    
    
}

