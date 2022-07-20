/* insere o conteúdo do arquivo stdio.h */
#include <stdio.h>
int main()
{ /* declaraçao das variaveis */
  int idade, ano;
  float altura;
  char nome[30];
  /*entrada de dados */
  /*mensagem ao usúario */
  printf("Put your name: ");
  scanf("%s", nome); /* Leitura do nome */
  /* Mensagem ao usúario */
  printf("Put your age: ");
  scanf("%d", &idade); /* Leitura da idade*/
  /*mensagem ao usuário */
  printf("Put your height: ");
  scanf("%f", &altura); /* Leitura da altura */
  /* processamentos */
  /*cálculo do ano de nascimento */
  ano = 2022 - idade;
  /*saída de dados*/
  printf("\nThe name is: %s", nome);
  printf("\nThe height is: %.2f", altura);
  printf("\nThe age is: %d", idade);
  printf("\nThe birth year is: %d", ano);
  return (0);
}