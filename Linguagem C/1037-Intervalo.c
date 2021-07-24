#include<stdio.h>
int main(){
    float valor;
    scanf("%f", &valor);
    if(valor>=0.0 && valor<=25.0){
       printf("Intervalo [0,25]");
       printf("\n");
    }
    if(valor>25.0 && valor<=50.0){
       printf("Intervalo (25,50]") ;
       printf("\n"); 
    }
    if(valor>50.0 && valor<=75.0){
       printf("Intervalo (50,75]") ;
       printf("\n"); 
    }
    if(valor>75.0 && valor<=100.0){
       printf("Intervalo (75,100]") ;
       printf("\n"); 
    }
    if(valor<0.0 || 100.0<valor){
       printf("Fora de intervalo") ;
       printf("\n"); 
    }
}