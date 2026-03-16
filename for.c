#include <stdio.h>

int main(){
    int i;
    int j = 0;
    int k = 1;
    int l;
    printf("\t%d\n", k);

    for(i = 0; i < 20; i++){
        l = j+k;
        printf("%d + %d = %d\n", j, k, l);
        j = k;
        k = l;
    }
}