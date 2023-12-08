/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
/*crear un progrma que implemente el algoritmo de busqueda binaria a una funcion y 
muestre el numero de comparaciones y movimientos realizados al buscar el numero 17 en el siguiente vector*/
void main(){
    int vn[12]={2,3,4,5,6,8,12,17,19,23,25,26};
    int busc=17,li=0,ls=11,pos,comparaciones;
    printf("-------Busqueda binaria--------");
    while(li<=ls){
        pos=(li+ls)/2;
        if(vn[pos]==busc){
            li=ls+1;
            break;
            
        }else{
            comparaciones++;
            if(busc<vn[pos]){
                ls=pos-1;
                
            }else{
                li=pos+1;
            }
        }
        
    }
    printf("\n--> 0 Permutaciones y %i comparaciones.",comparaciones);
    printf("\n--> El valor esta en la posicion : %i.",pos);
    printf("\nFin.");
    

}

