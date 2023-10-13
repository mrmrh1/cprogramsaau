#include <stdio.h>

int main(){

    int count_years = 0;
    int pop = 9870;

    for(pop = 9870; pop <= 30000; pop*=1.1){
        count_years = count_years + 1;
    }

    printf("Count years: %d Population: %d", count_years, pop);

    return 0;

}