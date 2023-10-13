#include <stdio.h>

// Sten , Saks papir program der tager to input og beregner om spiller 1 har vundet
int main (void) {
  char spiller1sHaand;
  char spiller2sHaand;
  int spiller1Vandt;
  int uafgjort;
  
  printf ("GIv spiller1s haand (r for sten, s saks og p for papir)\n");
  scanf ("%c",&spiller1sHaand);
  printf ("GIv spiller2s haand (r for sten, s saks og p for papir)\n");
  scanf (" %c",&spiller2sHaand);


  spiller1Vandt = (spiller1sHaand == 'r' && spiller2sHaand == 's') ||
    (spiller1sHaand == 's' && spiller2sHaand == 'p') ||
    (spiller1sHaand == 'p' && spiller2sHaand == 'r');

  uafgjort = (spiller1sHaand == 'r' && spiller2sHaand == 'r') ||
    (spiller1sHaand == 's' && spiller2sHaand == 's') ||
    (spiller1sHaand == 'p' && spiller2sHaand == 'p');
  
  printf ("SPiller 1 vandt: %d\n",spiller1Vandt);
  printf ("Uafgjort: %d\n",uafgjort);
}
