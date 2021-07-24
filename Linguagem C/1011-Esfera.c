#include <stdio.h>
#define pi 3.14159
int main(){
    double raio;
    scanf("%lf", &raio);
    printf("VOLUME = %.3lf", (4.0/3)*pi*raio*raio*raio);
    printf("\n");
}