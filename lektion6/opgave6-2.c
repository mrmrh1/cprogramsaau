#include <stdio.h>

void hours_minutes_seconds(int *sekunder_out, int *min_out, int *h_out);

int main(void){

    int sekunder_out = 0;
    int min_out = 0;
    int h_out = 0;

    printf("Start med at give et antal af sekunder \n");
    scanf("%d", &sekunder_out);

    hours_minutes_seconds(&sekunder_out, &min_out, &h_out);

    printf("Det svarer til %d timer, %d minutter og %d sekunder", h_out,min_out,sekunder_out);

    return 0;
}

void hours_minutes_seconds(int *sekunder_out, int *min_out, int *h_out){

    *min_out = *sekunder_out/60;
    *sekunder_out = *sekunder_out%60;
    
    *h_out = *min_out/60;
    *min_out = *min_out%60;
}