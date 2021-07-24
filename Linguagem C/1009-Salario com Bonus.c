#include<stdio.h>
int main(){
char nome;
double salary, vendas, total;
scanf("%s%lf%lf", &nome, &salary, &vendas);
total= salary+vendas*0.15;
printf("TOTAL = R$ %.2lf", total);
printf("\n");
}
