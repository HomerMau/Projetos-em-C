#include <stdlib.h>
#include <stdio.h>
int main(){
  char letra;
  FILE *arquivo;

  arquivo = fopen("Cringe","w");
  if (arquivo == NULL)
  {
  printf("Erro ao iniciar o arquivo!\n");
  system("pause");
  exit (-1);
  }
  else{
    printf("Digite uma caractere: ");
    scanf("%c", &letra);
    fflush(stdin);
    while ((letra != "f") && (letra != "F"))
    {
      fputc(letra, arquivo);
      if (ferror(arquivo))
      {
        printf("Erro na gravacao !!!\n");
      }
      else{
        printf("Gravacao efetuada com sucesso!\n");
      }
      printf("Digite outro caractere: ");
      scanf("&c", &letra);
      fflush(stdin);
    }
    
    }
    fclose(arquivo);
  }
