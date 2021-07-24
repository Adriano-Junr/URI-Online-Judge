#include <stdio.h>
 
int main() {
 
    int m, i = 1, j = 7;
    for(m=1; m<28; m++){
        for(m=1; m<4; m++){
            printf("I=%d J=%d\n", i, j);
            j=j-1;
        }
        if(i==9){break;}
        i=i+2;
        j= 7;
    }
 
    return 0;
}