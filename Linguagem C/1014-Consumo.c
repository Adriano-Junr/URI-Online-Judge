#include <stdio.h>	

int main (){
    int distancia;
    double combustivel, consumo;
    scanf ("%d%lf", &distancia, &combustivel);
    consumo = distancia/combustivel;
    printf ("%.3lf km/l", consumo);
    printf("\n");
    return 0;
}