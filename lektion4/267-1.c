#include <stdio.h>

int main(){

    int n;
    int m;
    int sum = 0;

    printf("Number:\n");
    scanf("%d", &n);

    for(m = 0; m <= n; m++){
        sum = sum + m;
    }

    if(sum == (n * (n+1) / 2)){
        printf("Same");
    }
    else{
        printf("Different");
    }

    return 0;
}