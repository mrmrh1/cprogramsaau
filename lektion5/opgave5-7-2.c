#include <stdio.h>


int pop_proj(double startPop, double upperLimit, double growthPercent);

int main(void){

    int year;

    double startPop, upperLimit, growthPercent;
    printf("Enter startpopulation, percent growth of population, and end population");
    scanf("%lf %lf %lf", &startPop, &growthPercent, &upperLimit);
    year = pop_proj( startPop,  upperLimit,  growthPercent);
    printf("After %d years, the population will reach %lf", year, upperLimit);

    return 0;
}

int pop_proj(double startPop, double upperLimit, double growthPercent){

    int i, year = 0;

        for (i = startPop; i <= upperLimit; i *= growthPercent)
        {
            year = year + 1;
        }
    
    return year;
}