#include <stdio.h>

void main(){
    printf("------algoritmo de busqueda binaria-------");
   int vn[14]={2,3,4,5,6,7,8,9,13,17,19,23,25,26};
   int busc=17,li=0,ls=11,pos;
   while(li<=ls){
       pos=(li+ls)/2;
       if(vn[pos]==busc){
           li=ls+1;
           break;
           
       }else{
           if(busc<vn[pos]){
               ls=pos-1;
               
           }else{
               li=pos+1;
           }
       }
   }
   printf("\nel valor esta en la posicion : %i",pos);
}
