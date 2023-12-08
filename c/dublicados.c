/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void main()
{
    int vnum[5],ndup;
    for(int i=0;i<5;i++){
        printf("ingrese numero: ");
        scanf("%i",&ndup);
        ndup=ndup*2;
        vnum[i]=ndup;
    }
    for(int i=0;i<5;i++){
        printf("%i ",vnum[i]);
            
        
    }
    
}

