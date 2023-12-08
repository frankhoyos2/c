/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdio.h>
void imprimirdeformaascendente();
void imprimirdeformadescendente();
void imprimirimpares();
void imprimirmultiplos();
void calculapromedio();
void imprimircomprendidos();
void funcioncompren(int menor,int mayor);
void main(){
    printf("\tpunto1\n");
    imprimirdeformaascendente();
    printf("\n\tpunto2\n");
    imprimirdeformadescendente();
    printf("\n\tpunto3\n");
    imprimirimpares();
    printf("\n\tpunto4\n");
    imprimirmultiplos();
    printf("\n\tpunto5\n");
    calculapromedio();
    printf("\n\tpunto6\n");
    imprimircomprendidos();

}
void imprimirdeformaascendente(){
    int num = 1;
    while (num<=20) {
        printf("%i ,",num);
        num = num+1;
    }
}
void imprimirdeformadescendente(){
    int num2 = 20;
    while (num2 >= 10){
        printf("%i ,",num2);
        num2 = num2-1;
    }
}
void imprimirimpares(){
    int num3 = 1,cont=0;
    while (cont<=10){
        printf("%i ,",num3);
        num3 = num3+2;
        cont = cont+1;
    }
}
void imprimirmultiplos(){
    int mul=5,contador=0;
    while (contador<=10){
        printf("%i ,",mul);
        mul=mul+5;
        contador=contador+1;
    }
}
void calculapromedio(){
    int num,suma,conta=0;
    while (conta<=10){
        printf("ingrese el numero: ");
        scanf("%i",&num);
        suma=suma+num;
        conta=conta+1;
    }
    suma=suma/10;
    printf("\nel promedio de los numeros ingresados es: %i ",suma);
}
void imprimircomprendidos(){
    int parte1,parte2;
    printf("ingrese el primer numero: ");
    scanf("%i",&parte1);
    printf("\ningrese el segundo numero: ");
    scanf("%i",&parte2);
    if (parte1 == parte2){
        printf("no se puede realizar ya que son iguales");

    }else {
        if (parte1 > parte2){
            funcioncompren(parte2,parte1);
            
        }else {
    
            funcioncompren(parte1,parte2);

        }
    }
}
void funcioncompren(int menor,int mayor){
    menor = menor+1;
    while (menor < mayor){
                printf("%i ",menor);
                menor = menor+1;
            }
}



