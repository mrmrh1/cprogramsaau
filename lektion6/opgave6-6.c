#include <stdio.h>

void curConverter (double usd, double *yen, double *dkk, double *eur, double *rub);

int main(void){

    double usd, yen, dkk, eur, rub;
/*
    printf("Enter USD value: ");
    scanf("%lf", &usd);
*/

    for (usd = 1; usd <= 100; usd++)
    {
        curConverter(usd, &yen, &dkk, &eur, &rub);
        printf("%lf USD = %lf YEN, %lf DKK, %lf EUR, %lf RUB\n", usd, yen, dkk, eur, rub);
    }

return 0;
}

void curConverter (double usd, double *yen, double *dkk, double *eur, double *rub){

    *yen = usd * 119.9;
    *dkk = usd * 6.66;
    *eur = usd * 0.89;
    *rub = usd * 66.43;

}