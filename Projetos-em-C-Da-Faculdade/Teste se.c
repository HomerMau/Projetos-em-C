#include <stdio.h>

int main()
{
  // Começou a brncadeira
  // Variaveis
  int N;
  // Teste de mesa
  printf("Por favor informe um numero: ");
  scanf("%d", &N);
  printf("O numero escolhido foi %d", N);
  if (N > 10)
  {
    printf("\nO resultado foi maior que 10");
  }
  else if (N < 10)
  {
    printf("\nO resultado foi menor que 10");
  }
  if (N == 10)
  {
    printf("\n O resutado foi igual a 10");
  }
  if (N > 10 && N < 20)
  {
    printf("\nO resultado foi maior que 10 e menor que 20");
  }
}