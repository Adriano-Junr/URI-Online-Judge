#include<stdio.h>
int main(){
    int dias, cMeses, cDias, cAnos;
    scanf("%d", &dias);
    cAnos=dias/365;
    cMeses=(dias%365)/30;
    cDias=((dias%365)%30);
    printf("%d ano(s)", cAnos);
    printf("\n");
    printf("%d mes(es)", cMeses);
    printf("\n");
    printf("%d dia(s)", cDias);
    printf("\n");
}