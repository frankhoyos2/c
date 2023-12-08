#include <stdio.h>

void main(){
    int vn[6]={6,8,4,5,1,2};
    int aux,ord=0,i=1;
    while(i<6 && ord==0){
        i=i+1;
        ord=1;
        for(int j=0;j<=6-i;i++){
            if(vn[j]>vn[j+1]){
                ord=0;
                aux=vn[j];
                vn[j]=vn[j+1];
                vn[j+1]=aux;
                
            }
            
        }
        
    }
    for(int k=0;k<6;k++){
        printf("%i ",vn[k]);
        
    }
    
}