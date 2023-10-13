#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main ()
{
    double m;
    double n;

    printf("Provide side 1 and 2 lengths:\n");
    scanf("%lf %lf", &m, &n);
    double side1 = m*m - n*n;
    double side2 = 2*n*m;
    double hypotenuse = m*m + n*n;

    printf("Side 1 is: %lf, Side 2 is %lf, Hypotenuse is %lf\n", side1, side2, hypotenuse);

    return 0;
}