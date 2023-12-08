/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
void muldetres();
void sietedubli();
void impnega();
void parcialbajo();
void mostrarposi();
void multivecporvec();
void restantevect();
void letraaste();
int main()
{
    printf("punto 1");
    sietedubli(),
    printf("\n\tpunto 2\n");
    muldetres();
    printf("\n\tpunto 3");
    impnega();
    printf("\n\tpunto 4");
    parcialbajo();
    printf("\n\tpunto 5");
    mostrarposi();
    printf("\n\tpunto 6\n");
    multivecporvec();
    printf("\n\tpunto 7");
    restantevect();
    printf("\n\tpunto 8");
    letraaste();
}
void sietedubli(){
     int vnum[5],ndup;
    for(int i=0;i<5;i++){
        printf("\ningrese numero: ");
        scanf("%i",&ndup);
        ndup=ndup*2;
        vnum[i]=ndup;
    }
    for(int i=0;i<5;i++){
        printf("%i ",vnum[i]);
            
        
    }
    
}
void muldetres(){
    int vmult3[10],mult3;
    for(int i=1;i<=10;i++){
        mult3=i*3;
        vmult3[i-1]=mult3;
    }
    for(int i=0;i<10;i++){
        printf("%i ",vmult3[i]);
    }
}
void impnega(){
    int vnum[10];
    for(int i=0;i<10;i++){
        printf("\ningrese numero: ");
        scanf("%i",&vnum[i]);
    }
    for(int i=0;i<10;i++){
        if(vnum[i]<0){
            printf("%i ",vnum[i]);
        }
    }
}
void parcialbajo(){
    float parcial[4],numor;
    for(int i=0;i<4;i++){
        printf("\ningrese nota: ");
        scanf("%f",&parcial[i]);
    }
    numor=parcial[0];
    for(int i=0;i<4;i++){
        if(numor>parcial[i]){
            numor=parcial[i];
        }
        
    }
    printf("\nla nota mas baja es: %f",numor);
    
}
void mostrarposi(){
    int vnum[10],ingresado;
    srand(time(NULL));
    for(int i=0;i<10;i++){
        vnum[i]= rand()%101;
    }
    printf("\ningrese un numero: ");
    scanf("%i",&ingresado);
    for(int i=0;i<10;i++){
        if(ingresado==vnum[i]){
            printf("\nel numero se encontro en la posicion %i",i);
            break;
        }else{
            if(i==9){
                printf("\nel numero no se encontro en el vector");
            }
        }
    }
    
}
void multivecporvec(){
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
void restantevect(){
    int vec1[5],vec2[3],veconca[8];
    for(int i=0;i<5;i++){
        printf("\ningrese numero: ");
        scanf("%i",&vec1[i]);
    }
    for(int l=0;l<3;l++){
        printf("\ningrese numero: ");
        scanf("%i",&vec2[l]);
    }
    for(int i=0;i<5;i++){
        veconca[i]=vec1[i];
    }
    for(int i=5;i<8;i++){
        veconca[i]=vec2[i-5];
    }
    for(int k=0;k<8;k++){
        printf("%i ",veconca[k]);
    }
    
}

void letraaste(){
    char vectorPalabra[5]="queso";
    char vectorAsteriscos[5] = {'*', '*', '*', '*', '*'};
    char letraUsuario;
    printf("\nIngresa una letra: ");
    scanf(" %c", &letraUsuario);
    for (int i = 0; i < 5; i++) {
        if (vectorPalabra[i] == letraUsuario) {
            vectorAsteriscos[i] = letraUsuario;
        }
    }
    printf("\nVector de asteriscos: ");//se pone afuera para evitar repetir dentro del bucle,se pone junto por no tenr salto
    for (int i = 0; i < 5; i++) {
        printf(" %c", vectorAsteriscos[i]);
    }
    
}






