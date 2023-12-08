/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(){
    int num=8,producto;
    for(num;num<=10;num++){
        for(int cambio = 1;cambio<=10;cambio++){
        producto=num*cambio;
        printf("%ix%i=%i\n",num,cambio,producto);
        }
        printf("\n");
        
    }
    
}
