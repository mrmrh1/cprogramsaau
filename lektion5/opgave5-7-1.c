#include <stdio.h>

int n;

int sum_iter(int n);
int sum_formula(int n);

int main(){

    printf("Indtast et heltal:\n");
    scanf("%d", &n);
    if (sum_iter(n) == sum_formula(n))
    {
        printf("Same\n");
    } else
    {
        printf("Different\n");
    }

    return 0;
}

int sum_iter(int n){

    int i, sum = 0;

        for (i = 0; i <= n; i++)
        {
        sum = i + sum;
        }
    return sum; 
}

int sum_formula(int n){

    int sum = 0;

    sum = (n+1)*n/2;

    return sum;
}


