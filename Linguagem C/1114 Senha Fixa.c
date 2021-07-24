#include <stdio.h>
 
int main() {
 
    int senha, i;
    for(i=1; i>0; i++){
        scanf("%d", &senha);
        if(senha==2002){
            printf("Acesso Permitido\n");
            break;
        }else{printf("Senha Invalida\n");}
    }
 
    return 0;
}