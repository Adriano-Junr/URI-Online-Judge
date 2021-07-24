#include <stdio.h>
 
int main() {
 
    int m, i = 1, j = 7,aux = j;
    for(m=1; m<28; m++){
        for(m=1; m<4; m++){
            printf("I=%d J=%d\n", i, j);
            j=j-1;
        }
       
        if(i==9){break;}
        i=i+2;
        j= aux+2;
        if(j==9){for(m=1; m<2; m++){
            aux= aux+2;
        }}
        if(j==11){for(m=1; m<2; m++){
            aux= aux+2;
        }}
        if(j==13){for(m=1; m<2; m++){
            aux= aux+2;
        }}
    }
 
    return 0;
}