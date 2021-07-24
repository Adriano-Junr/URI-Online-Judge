#include <stdio.h>
#define pi 3.14159
int main(){
    double A, B, C;
    scanf("%lf%lf%lf", &A, &B, &C);
    printf("TRIANGULO: %.3lf", A*C/2);
    printf("\n");
    printf("CIRCULO: %.3lf", C*C*pi);
    printf("\n");
    printf("TRAPEZIO: %.3lf", (A+B)*C/2);
    printf("\n");
    printf("QUADRADO: %.3lf", B*B);
    printf("\n");
    printf("RETANGULO: %.3lf", A*B);
    printf("\n");
}