#include <stdio.h>
#include <locale.h>

int main()
{

  int i, j;
  int matriz[5][5] = {{15, 9, 23, 43, 49},
                      {3, 36, 55, 53, 18},
                      {12, 42, 51, 57, 34},
                      {6, 32, 28, 25, 62},
                      {72, 91, 81, 16, 41}};

  for (i = 0; i < 5; i++)
  {
    for (j = 0; j < 5; j++)
    {
      if (matriz[5][5]  %3==0)
      {

  for (i = 0; i < 5; i++)
  {
    for (j = 0; j < 5; j++)
    {
            printf("\nNumero divisivel por 3 encontrado na linha %d, coluna %d, numero %d", i + 1, j + 1, matriz[i][j]);
      
        
      }
     return 0;
     }}}
  }
}