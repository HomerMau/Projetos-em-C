#include <stdio.h>

int main()
{
   int Dia;

   printf("\nEscreva o dia da semana: ");
   scanf("%d", &Dia);
   switch (Dia)
   {

   case 1:
      printf("\nDomingo");
      break;
   case 2:
      printf("\nSegunda");
      break;
   case 3:
      printf("\nTerça");
      break;
   case 4:
      printf("\nQuarta");
      break;
   case 5:
      printf("\nQuinta");
      break;
   case 6:
      printf("\nSexta");
      break;
   case 7:
      printf("\nSabádo");
      break;
   default:
      printf("\nValor Inválido");
      break;
   }
   return (0);
}