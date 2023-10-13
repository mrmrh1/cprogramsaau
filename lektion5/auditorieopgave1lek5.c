#include <stdio.h>
#define PI 3.14159

void valg_af_udregning(char, double);
double regn_omkreds(double);
double regn_areal(double);


int main(void){
    double r; char valg;

    printf("Udregn areal eller omkreds for en cirkel, a for areal eller o for omkreds\n");
    scanf("%c", &valg);
    printf("Indtast radius:\n");
    scanf("%lf", &r);
    valg_af_udregning(valg, r);

    return 0;
}

void valg_af_udregning(char valg, double r){
    char svar; 
    if (valg == 'a')
    {
        svar = regn_areal(r);
        printf("Arealet er: %lf", svar);
    }
    else if (valg == 'o')
    {
        svar = regn_omkreds(r);
        printf("Omkredsen er: %lf", svar);

    }
    else
    {
        printf("ERROR");
    }

}

double regn_omkreds(double radius){
    return 2 * PI * r;
}

double regn_areal(double radius){
    return PI * r * r;
}