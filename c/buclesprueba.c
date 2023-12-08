/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>//entrada y salida
#include <stdlib.h>//numeros aleatorios rand()%21;
#include <time.h>//cambio a tiempo real  srand(time(NULL))
#include <string.h>//manejos de cadenas,compacion,longitud,etc. (strcmp(continuar, "si") == 0);
#include <ctype.h>//conversiones de carac y cadenas continuar[i] = tolower(continuar[i]);

void funcioncompren(int menor,int mayor);
void imprimircomprendidos();
void hastavalornegativo();
void factorial(int factorial);
void cantidadposine();
void azarmayor();
void fibo();
void adivina();
void multisiete();
void areasrectan();
void asteristicos();
void tablas();
void multisuce();
int suma=0;
void main(){
    int facto;
    printf("\n\tpunto 7");
    imprimircomprendidos();
    printf("\n\tpunto 8");
    hastavalornegativo();
    printf("\n\tpunto 9");
    printf("\ningrese el nuemro: ");
    scanf("%i",&facto);
    factorial(facto);
    printf("\n\tpunto 10");
    cantidadposine();
    printf("\n\tpunto 11\n");
    azarmayor();
    printf("\n\tpunto 12\n");
    multisuce();
    printf("\n\tpunto 13\n");
    fibo();
    printf("\n\tpunto 14\n");
    adivina();
    printf("\n\tpunto 15\n");
    multisiete();
    printf("\n\tpunto16\n");
    areasrectan();
    printf("\n\tpunto17\n");
    asteristicos();
    printf("\n\tpunto18\n");
    tablas();
    
}
void imprimircomprendidos(){
    int parte1,parte2;
    printf("\ningrese el primer numero: ");
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
                suma=suma+menor;
                menor = menor+1;
            }
    printf("\nla suma de los numeros comprendidos son: %i",suma);        
}
void hastavalornegativo(){
    int valor=0;
    do{
        printf("\ningrese el numero: ");
        scanf("%i",&valor);
    }while(valor>0);
}
void factorial(int factorial){
    for(factorial;factorial>=1;factorial--){
        printf("%i",factorial);
        if (factorial>1){
            putchar('x');
        }
        
    }
}
void cantidadposine(){
    int num,cont=0,posi=0,nega=0;
    while(cont<10){
        printf("ingrese el numero: ");
        scanf("%i",&num);
        if (num>0){
            posi=posi+1;
        }else{
            nega=nega+1;
        }
        cont=cont+1;
    }
    printf("\nusted ingreso %i numeros positivos y %i negativos",posi,nega);
}
void azarmayor(){
    
    int numeros[10];
    
    int mayor = 0; 
    srand(time(NULL));

   
    for (int i = 0; i < 10; i++) {
        numeros[i] = rand() % 100 + 1;
        printf("Ingresa el número %d: %d\n", i + 1, numeros[i]);

        if (numeros[i] > mayor) {
            mayor = numeros[i];
        }
    }
    printf("El número mayor ingresado es: %d\n", mayor);

  
}
void fibo(){
    int num1=0,num2=1;
    for(int i=0;i<10;i=i+2){
        printf("%i, %i",num1,num2);
        num1 = num1 + num2;
        num2 = num1 + num2;
    }
}
void adivina(){
    int numadivinar,ingresado;
    srand(time(NULL));
    numadivinar= rand()%21;
    for(int i=0;i<10;i++){
        printf("\nadivina un numero que esta entre 0 y 20: ");
        scanf("%i",&ingresado);
        if(ingresado==numadivinar){
            printf("\nmagnifico,adivinaste");
            break;
        }
        if(ingresado < 0 || ingresado>20){
            printf("\nel numero ingresado no esta en el rango deseado");
        }else{
            if(ingresado>numadivinar){
                printf("\nel numero ingresado se encuentra por encima");
            }else{
                printf("\nel numero ingresado se encuentra por debajo");
                
            }
        }
    }
}
void multisiete(){
    int num=7,producto;
    for(int cambio = 1;cambio<=20;cambio++){
        producto=num*cambio;
        printf("%ix%i=%i\n",num,cambio,producto);
        
    }
    
}
void areasrectan(){
    float altura,base,area;
    char continuar[2];
    do{
        printf("\ningrese la altura: ");
        scanf("%f",&altura);
        printf("\ningrese la base: ");
        scanf("%f",&base);
        area=(base*altura)/2;
        printf("\nel area es: %f",area);
        printf("\ndesesas continuar?: ");
        scanf("%s",continuar);
        for (int i = 0;continuar[i]; i++) {
        continuar[i] = tolower(continuar[i]);
    }
        
    }while(strcmp(continuar, "si") == 0);
}
void asteristicos(){

    for(int nivel = 0;nivel<=10;nivel++){//hace uno y para poder seguir debe hacer los otros
        for(int as=1;as<=nivel;as++ ){
            printf("*"); //jerarquia
        }
        for(int espa = 0;espa<=nivel;espa++){
            printf(" ");//asi,va uno en uno
        }
        printf("\n");//da el salto el linea despues de emprimir los dos ciclos
        
    }
}
void tablas(){
    int num=8,producto;
    for(num;num<=10;num++){
        for(int cambio = 1;cambio<=10;cambio++){
        producto=num*cambio;
        printf("%ix%i=%i\n",num,cambio,producto);
        }
        printf("\n");
        
    }
}
void multisuce(){
    int num1,num2,produc;
    printf("ingrese el numero: ");
    scanf("%i",&num1);
    printf("ingrese el segundo: ");
    scanf("%i",&num2);
    for(int i=0;i<num2;i++){
        produc=produc+num1;
    }
    printf("la multiplicacion es: %i",produc);
}
    
























