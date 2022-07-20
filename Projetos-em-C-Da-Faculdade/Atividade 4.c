#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//===================STRUCT=======================//
struct paciente
{
  int codigo;
  char nome[30];
  char CPF[14];
  char vacina[20];
  char data[10];
  int nLote;
};

int main()
{

  //===================STRUCT=======================//
  struct paciente cad[99];

  int i;
  int cont;
  int op;
  char busca[14];
  int acha;

  op = 0;
  i = 0;
  cont = 0;

  //====================FUNÇAO================//
  void cadastro()
  {
    cont = cont + 1;
    for (i = 0; i < cont; i++)
      ;
    {
      printf("O codigo da vacina e: %d\n", --i);

      printf("Digite o nome do paciente: ");
      gets(cad[i].nome);
      fflush(stdin);
      printf("Digite o CPF do paciente: ");
      gets(cad[i].CPF);
      fflush(stdin);
      printf("Digite qual foi nome da vacina aplicada no paciente: ");
      gets(cad[i].vacina);
      fflush(stdin);
      printf("Digite a data: ");
      gets(cad[i].data);
      fflush(stdin);
      printf("Digite o lote da vacina: ");
      scanf("%d", &cad[i].nLote);
      fflush(stdin);
      printf("\n\n");
    }
  }

  //====================FUNÇAO================//
  void relatorio()
  {
    for (i = 0; i < cont; i++)
    {
      printf("\nCódigo: %d\n", i);
      printf("Nome: %s\n", cad[i].nome);
      printf("CPF: %s\n", cad[i].CPF);
      printf("Vacina: %s\n", cad[i].vacina);
      printf("Data: %s\n", cad[i].data);
      printf("Numero do Lote: %d\n", cad[i].nLote);
      printf("========================================");
    }
  }
  //====================FUNÇAO================//
  void buscaCPF()
  {
    printf("Digite o CPF que deseja buscar: ");
    gets(busca);
    fflush(stdin);

    for (i = 0; i < cont;)
    {

      acha = strcmp(busca, cad[i].CPF);

      if ((acha == 0) && (i < cont))
      {
        system("cls");
        printf("Código: %d\n", i);
        printf("Nome: %s\n", cad[i].nome);
        printf("CPF: %s\n", cad[i].CPF);
        printf("Vacina: %s\n", cad[i].vacina);
        printf("Data: %s\n", cad[i].data);
        printf("Numero do Lote: %d\n", cad[i].nLote);
        i = cont;
      }

      else
      {
        system("cls");
        printf("\n CPF nao encontrado");
        i = i + 1;
      }
    }
  }
  //====================FUNÇAO================//
  void escolhas()
  {
    printf("\n\n");
    printf("Para voltar pressione ENTER\n");
    getchar();
  }

  //====================INICIO==============//

INICIO:

  system("cls");

  printf("==================================");
  printf("BEM-VINDO AO PROGRAMA DE GESTAO DE VACINAS!");
  printf("==================================");
  printf("\n\n");

  do
  {

    printf("Por favor, selecione o numero para o que voce deseja fazer:\n");
    printf(" 1 - Cadastrar Vacina \n");
    printf(" 2 - Mostrar relatório geral de aplicações\n");
    printf(" 3 - Consultar por CPF\n");
    printf(" 4 - Sair\n");

    //====================ESCOLHAS===================//

    scanf("%d", &op);
    fflush(stdin);
    switch (op)
    {
    case 1:
    CASE1:
      system("cls");
      cadastro();

    ESCOLHA:
      printf("Voce deseja cadastrar mais pacientes?\n");
      printf("1 - Sim\n");
      printf("2 - Retornar ao menu principal\n");
      scanf("%d", &op);
      fflush(stdin);
      if (op == 1)
      {
        goto CASE1;
      }
      else if (op == 2)
      {
        goto INICIO;
      }
      else
      {
        system("cls");
        printf("\nOpcao invalida por favor digite novamente:\n\n");

        goto ESCOLHA;
      }
      break;

    case 2:
      system("cls");
      relatorio();

      //====================ESCOLHAS===================//
      escolhas();
      system("cls");

      goto INICIO;

      // printf("pinto");
      break;
    case 3:
      system("cls");
      buscaCPF();

      //====================ESCOLHAS===================//
      escolhas();
      system("cls");
      goto INICIO;

      // ("calca");
      break;
    case 4:
      system("cls");
      printf("cagado");
      break;

    default:
      system("cls");
      printf("Opcao invalida por favor digite novamente:\n\n");
      break;
    }

  } while (op >= 5);
  return (0);
}