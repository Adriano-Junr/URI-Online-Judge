#include<stdio.h>
int main(){
int codigo1, codigo2, qtde1, qtde2;
double valor1, valor2;
scanf("%d%d%lf%d%d%lf", &codigo1, &qtde1, &valor1, &codigo2, &qtde2, &valor2);
printf("VALOR A PAGAR: R$ %.2lf", qtde1*valor1+qtde2*valor2);
printf("\n");
}