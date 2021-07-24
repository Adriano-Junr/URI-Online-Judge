#include <stdio.h>
 
int main() {
 
    int m, i = 1, j = 60;
    for(m=1; m<14; m++){
        printf("I=%d J=%d\n", i, j);
        i=i+3;
        j=j-5;
    }
 
    return 0;
}