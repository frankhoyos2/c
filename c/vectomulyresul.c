/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main(){
    int vnum[4],vnum2[4],vnum3[4];
    srand(time(NULL));
    for(int i=0;i<4;i++){
        for(int l=0;l<=i;l++){
            vnum[l]= rand()%21;
    
        }
        for(int k=0;k<=i;k++){
            vnum2[k]= rand()%21;
            
        }
        vnum3[i]= vnum[i]*vnum2[i];
        printf("%i ",vnum3[i]);
    }
}



