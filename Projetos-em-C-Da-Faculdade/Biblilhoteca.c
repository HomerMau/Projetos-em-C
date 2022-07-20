#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define TAM 20

setlocale(LC_ALL, "Portuguese")

    struct livro
{
  int codigo;
  char titulo[50];
  char autor[30];
  char area[30];
  int ano;
  char editora[30];
};

int main()
{
  struct livro ficha[TAM];
  struct livro troca;
  int busca, i, j, acha, op;

  op = 0;
  while (op != 5)
  {
    printf("1 - Cadastrar os livros\n");
    printf("2 - Imprimir os livros cadastrado\n");
    printf("3 - Pesquisar livros por codigo");
    printf("4 - Ordenar os livros por cano\n");
    printf("5 - Sair\n");
    printf("Digite a opção desejada: ");
    scanf("%d", &op);
    fflush(stdin);
    if (op == 1)
    {
      system("cls");
      for (i = 0; i < TAM; i++)
      {
        printf("Digite o codigo do livro da posiçao %d", i + 1);
        scanf("%d", &ficha[i].codigo);
        fflush(stdin);
        printf("Digite o título do livro: ");
        scanf("%50[^\n]s", &ficha[i].titulo);
        fflush(stdin);
        printf("Digite o nome do autor: ");
        scanf("%30[^\n]s", &ficha[i].autor);
        fflush(stdin);
        printf("Digite a area do livro: ");
        scanf("%30[^\n]s", &ficha[i].area);
        fflush(stdin);
        printf("Digite um ano: ");
        scanf("%d", &ficha[i].ano);
        fflush(stdin);
        printf("Digite o nome da editora: ");
        scanf("%30[^\n]s", &ficha[i].editora);
        fflush(stdin);
      }
    }
    else
    {
      if (op == 2)
      {
        system("cls");
        for (i = 0; i < TAM; i++)
        {
          printf("\nCODIGO: %d\n", ficha[i].codigo);
          printf("TITULO: %s\n", ficha[i].titulo);
          printf("AUTOR: %s\n", ficha[i].autor);
          printf("AREA: %s\n", ficha[i].area);
          printf("ANO: %d\n", ficha[i].ano);
          printf("EDITORA: %s\n\n", ficha[i].editora);
        }
      }
      else
      {
        if (op == 3)
        {
          system("cls");
          printf("Digite o codigo que deseja buscar: ");
          scanf("%d", &busca);
          i = 0;
          acha = 0;
          while ((i < TAM) && (acha == 0))
          {
            if (ficha[i].codigo == busca)
              acha = 1;
            else
              i++;
          }
          if (acha == 1)
          {
            printf("\nCODIGO: %d\n", ficha[i].codigo);
            printf("TITULO: %s\n", ficha[i].titulo);
            printf("AUTOR: %s\n", ficha[i].autor);
            printf("AREA: %s\n", ficha[i].area);
            printf("ANO: %d\n", ficha[i].ano);
            printf("EDITORA: %s\n\n", ficha[i].editora);
          }
          else
            printf("\n Registro nao encontrado");
        }
        else
        {
          if (op == 4)
          {
            system("cls");
            for (i = 0; i < TAM - 1; i++)
            {
              for (j = i + 1; j < TAM; j++)
              {
                if (ficha[i].ano > ficha[j].ano)
                {
                  troca = ficha[i];
                  ficha[i] = ficha[j];
                  ficha[j] = troca;
                }
              }
            }
            for (i = 0; i TAM; i++)
            {
              printf("\n CODIGO: %d, TITULO: %s, ANO: %d\n\n", ficha[i].codigo,
                     ficha[i].titulo, ficha[i].ano);
            }
          }
        }
      }
    }
  }
  return (0);
}