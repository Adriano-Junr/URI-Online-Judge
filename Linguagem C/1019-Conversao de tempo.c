#include <stdio.h>

int main(){
   int segundos, horas, minutos, seg;
   scanf("%d", &segundos);
   horas = segundos/3600;
   minutos = (segundos%3600)/60;
   seg=((segundos%3600)%60);
   printf("%d:%d:%d\n",horas, minutos, seg);
   return 0;
}