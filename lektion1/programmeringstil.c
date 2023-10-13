#include <stdio.h>  

int main(void){
    float first_number, middle_number, last_number;

    printf("Give me three: ");
    scanf("%f %f %f", &first_number, & middle_number, & last_number);
    printf("Theresult: %f\n", (first_number+middle_number+last_number) / 3.0);  return 0;
}