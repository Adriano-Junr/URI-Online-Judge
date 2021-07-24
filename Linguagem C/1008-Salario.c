#include<stdio.h>
int main(){
int number_funcionary, horas_trabalhadas;
double valor_hora, salary;
scanf("%d%d%lf", &number_funcionary, &horas_trabalhadas, &valor_hora);
salary= horas_trabalhadas*valor_hora;
printf("NUMBER = %d", number_funcionary);
printf("\n");
printf("SALARY = U$ %.2lf", salary);
printf("\n");
}