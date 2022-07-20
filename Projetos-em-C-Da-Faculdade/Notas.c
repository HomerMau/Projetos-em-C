#include <stdio.h>
#include <stdlib.h>

int main() {
  float notas[4];
  int i;
    for(i=0; i<4; i++){
      printf("Digite a nota %d.\n", i+1);
      scanf("%f", &notas[i]);
    }
  }