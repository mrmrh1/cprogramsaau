#include <stdio.h>

#define TAL 14

int main(void){
  int gaet;
  int antal_gaet = 0;

  do {
    printf("Gaet et tal mellem 1 og 20:\n");
    scanf("%d", &gaet);
    if(gaet > 20 || gaet < 0){
      printf("Udenfor range");
    }
    else if(gaet==TAL){
      printf("Hurra! Du har gaettet rigtigt!\n");
      antal_gaet = antal_gaet + 1;
    } else {
      printf("Oev! Du har gaettet forkert!\n");
      antal_gaet = antal_gaet + 1;
    }
  } while (gaet!=TAL);

  printf("Du gaettede %d gange\n", antal_gaet);

  return 0;
}
