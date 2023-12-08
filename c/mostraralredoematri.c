/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void primero(int k,int l);
void segundo(int k,int l,int enter[5][5]);
void tercero(int k,int l,int enter[5][5]);
int enter[5][5];
void main(){
    int enter[5][5],k,l;
    srand(time(NULL));
    for(int f=0;f<5;f++){
        for(int c=0;c<5;c++){
            enter[f][c]=rand()%11;
            printf("%i ",enter[f][c]);
            
        }
        printf("\n");
    }
    printf("ingrese posicion de la fila: ");
    scanf("%i",&k);
    printf("ingrese posicion de la columna: ");
    scanf("%i",&l);
    if(k==0 && l==0){
       primero(k,l);
    }else{
        if(k<4 && l<4){
            tercero(k,l,enter);
        }
    }
    if(k<4 && l==0){
                
            
    }
    if(k==4 && l==0){
        segundo(k,l,enter);
        
    }
    if(k==0 && l==4){
        
    }
    if(k==4 && l==4){
        
    }
}
void primero(int k,int l){
        k+=2;
        l+=2;
        for(int f=0;f<k;f++){
            for(int c=0;c<l;c++){
            printf("%i ",enter[f][c]);
            
            }
        printf("\n");
        
        }
}
void segundo(int k,int l,int enter[5][5]){
        k-=1;
        l+=2;
        for(int f=k;f<5;f++){
            for(int c=0;c<l;c++){
            printf("%i ",enter[f][c]);
            
            }
        printf("\n");
        
        }
    
}

    





