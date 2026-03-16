#include <stdio.h>

int fibonacci(int n, int j, int k);

int main(){
    int n = 20;
    int j = 0;
    int k = 1;
    printf("0\n");
    fibonacci(n, j, k);
    return 0;
}

int fibonacci(int n, int j, int k){
    int i = n;
    i--;
    if(i == 0){
        return 0;
    }
    int l = j + k;
    printf("%d + %d = %d\n",j, k, l);
    l = j + k;

    return fibonacci(i, k, l);
}