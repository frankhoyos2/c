/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int enter[5][5];
void indicar(int fi,int col);
void esquinasup(int fi,int col);
void superior(int fi,int col);
void esquinasupdere(int fi,int col);
void derecha(int fi,int col);
void izquierda(int fi,int col);
void medio(int fi,int col);
void esquinainf(int fi,int col);
void inferior(int fi,int col);
void inferder(int fi,int col);
void main(){
    int filas,columnas;
    srand(time(NULL));
    for(int f=0;f<5;f++){
        for(int c=0;c<5;c++){
            enter[f][c]=rand()%11;
            printf("%i ",enter[f][c]);
            
        }
        printf("\n");
    }
    printf("ingrese posicion de la fila: ");
    scanf("%i",&filas);
    printf("ingrese posicion de la columna: ");
    scanf("%i",&columnas);
    indicar(filas,columnas);
    if(filas>4 && columnas>4){
        printf("supera rango");
    }
    if(filas==0 && columnas==0){
        esquinasup(filas,columnas);
    }else{
        if(filas==0 && (columnas>0 &&columnas<4)){
            superior(filas,columnas);
        }
    }
    if(filas==0 && columnas==4){
        esquinasupdere(filas,columnas);
        
    }else{
        if((filas>0 && filas<4) && columnas==4){
            derecha(filas,columnas);
            
        }
    }
    if((filas>0 && filas<4) && columnas==0){
        izquierda(filas,columnas);
        
    }else{
        if((filas>0 && filas<4) && (columnas>0 && columnas<4)){
            medio(filas,columnas);
            
        }
    }
    if(filas==4 && columnas==0){
        esquinainf(filas,columnas);
        
    }else{
        if(filas==4 && (columnas>0 &&columnas<4)){
            inferior(filas,columnas);
            
        }
    }
    if(filas==4 && columnas==4){
        inferder(filas,columnas);
        
    }
    
}
void esquinasup(int fi,int col){
    fi+=2;
    col+=2;
    for(int f=0;f<fi;f++){
        for(int c=0;c<col;c++){
            printf("%i ",enter[f][c]);
            
        }
        printf("\n");
        
    }
}
void superior(int fi,int col){
    int izqui=col;
    fi+=2;
    col+=2;
    izqui-=1;
    for(int f=0;f<fi;f++){
        for(int c=izqui;c<col;c++){
            printf("%i ",enter[f][c]);
            
        }
        printf("\n");
        
    }
    
}
void esquinasupdere(int fi,int col){
    fi+=2;
    col-=1;
    for(int f=0;f<fi;f++){
        for(int c=col;c<5;c++){
            printf("%i ",enter[f][c]);
            
        }
        printf("\n");
    }
}
void derecha(int fi,int col){
    int arriba=fi;
    fi+=2;
    col-=1;
    arriba-=1;
    for(int f=arriba;f<fi;f++){
        for(int c=col;c<5;c++){
            printf("%i ",enter[f][c]);
            
        }
        printf("\n");
    }
    
}
void izquierda(int fi,int col){
    int arr=fi;
    fi+=2;
    col+=2;
    arr-=1;
    for(int f=arr;f<fi;f++){
        for(int c=0;c<col;c++){
            printf("%i ",enter[f][c]);
            
        }
        printf("\n");
    }
}
void medio(int fi,int col){
    int arriba=fi;
    int izquie=col;
    fi+=2;
    col+=2;
    arriba-=1;
    izquie-=1;
    for(int f=arriba;f<fi;f++){
        for(int c=izquie;c<col;c++){
            printf("%i ",enter[f][c]);
            
        }
        printf("\n");
    }
}
void indicar(int fi,int col){
    printf("el numero fila %i y columna %i es: %i ",fi,col,enter[fi][col]);
    printf("\n");
}
void esquinainf(int fi,int col){
    fi-=1;
    col+=2;
    for(int f=fi;f<5;f++){
        for(int c=0;c<col;c++){
            printf("%i ",enter[f][c]);
            
        }
        printf("\n");
    }
}
void inferior(int fi,int col){
    fi-=1;
    int izquie=col;
    col+=2;
    izquie-=1;
    for(int f=fi;f<5;f++){
        for(int c=izquie;c<col;c++){
            printf("%i ",enter[f][c]);
            
        }
        printf("\n");
    }
    
}
void inferder(int fi,int col){
    col-=1;
    fi-=1;
    for(int f=fi;f<5;f++){
        for(int c=col;c<5;c++){
            printf("%i ",enter[f][c]);
            
        }
        printf("\n");
    }
}





