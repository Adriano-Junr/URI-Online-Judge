#include<stdio.h>
int main(){
double a,b,c;
scanf("%lf%lf%lf", &a, &b, &c);
if((a+b)>c && (c+b)>a && (c+a)>b){
printf("Perimetro = %.1lf", a+b+c);
printf("\n");}else{
printf("Area = %.1lf", ((a+b)*c)/2);
printf("\n");}}