#include <stdio.h>

// Sten , Saks papir program der tager to input og beregner om spiller 1 har vundet
int main (void) {
  char spiller1sHaand;
  char spiller2sHaand;
  int spiller1Vandt;
  int uafgjort;
  int ugyldigt_input;
  
  
  printf ("GIv spiller1s haand (r for sten, s saks og p for papir)\n");
  scanf ("%c",&spiller1sHaand);
  printf ("GIv spiller2s haand (r for sten, s saks og p for papir)\n");
  scanf (" %c",&spiller2sHaand);


  spiller1Vandt = (spiller1sHaand == 'r' && spiller2sHaand == 's') ||
    (spiller1sHaand == 's' && spiller2sHaand == 'p') ||
    (spiller1sHaand == 'p' && spiller2sHaand == 'r');

  uafgjort = (spiller1sHaand == spiller2sHaand);

  ugyldigt_input = ((spiller1sHaand != 'r' && 's' && 'p') && (spiller2sHaand != 'r' && 's' && 'p'));
  
  if (ugyldigt_input) {
    printf ("Ugyldigt input\n");
  }

  else if (uafgjort) {
    printf ("Det blev uafgjort\n");
  }

  else if (spiller1Vandt) {
    printf ("Spiller 1 vandt\n");
  }

  else {
    printf ("Spiller 2 vandt\n");
  }
}
