/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <ctype.h>
void main(){
    char letras[3][4];
    int contvoc=0;
    for(int f=0;f<3;f++){
        for(int c=0;c<4;c++){
            printf("ingrese una letra en fila %i y columna %i: ",f,c);
            scanf(" %c",&letras[f][c]);/*el espacio en blanco antes de %c ayuda a evitar que los caracteres 
            de nueva línea o cualquier otro espacio en blanco 
            residual queden en el búfer de entrada y se interpreten
            como entrada válida en la próxima llamada a scanf.*/
            letras[f][c]=tolower(letras[f][c]);
            if(letras[f][c]=='a' || letras[f][c]=='e' || letras[f][c]=='i' || letras[f][c]=='o' || letras[f][c]=='u' ){
                contvoc+=1;
                
            }
            
        }
    }
    printf("\nusted ingreso %i vocales",contvoc);
}



