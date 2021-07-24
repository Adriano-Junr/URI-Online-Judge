#include<stdio.h>
int main(){
    int num, quant;
    scanf("%d%d", &num, &quant);
    if(num == 1){
       printf("Total: R$ %.2f", quant*4.00) ;
       printf("\n");
    }
    if(num == 2){
       printf("Total: R$ %.2f", quant*4.50) ;
       printf("\n"); 
    }
    if(num == 3){
       printf("Total: R$ %.2f", quant*5.00) ;
       printf("\n"); 
    }
    if(num == 4){
       printf("Total: R$ %.2f", quant*2.00) ;
       printf("\n"); 
    }
    if(num == 5){
       printf("Total: R$ %.2f", quant*1.50) ;
       printf("\n"); 
    }
}