#include<stdio.h>
int main(){
    float tempo, velocidadeMedia;
    scanf("%f%f", &tempo, &velocidadeMedia);
    printf("%.3f", (tempo * velocidadeMedia)/12);
    printf("\n");
}