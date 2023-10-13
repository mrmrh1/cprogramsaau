#include<stdio.h>

void add(int u1, int u2, int v1, int v2, int *w1, int *w2);

int main(void){
  int u1, u2, v1, v2, w1, w2;

        printf("Indtast vektor 1 og vektor 2's punkter\n");
        scanf("%d %d %d %d", &u1, &u2, &v1, &v2);
        add(u1, u2, v1, v2, &w1, &w2);

        printf("De to vektorer lagt sammen: %d, %d\n", w1, w2);

  return 0;
}

void add(int u1, int u2, int v1, int v2, int *w1, int *w2){
  *w1 = u1 + v1;
  *w2 = v2 + u2;
}

