#include <stdio.h>

int main()
{
  int torre = 0;
  int bispo = 0;
  int rainha = 0;
  printf("============TORRE===============\n");
  // TORRE
  while (torre < 5) {#include <stdio.h>

int main()
{
  int torre = 0;
  int bispo = 0;
  int rainha = 0;
  printf("\n============TORRE===============\n");
  // TORRE
  while (torre < 5) {
    torre++;
    printf("%d - Direita\n", torre);
  }
  
  printf("\n===========BISPO================\n");
  // BISPO
  for (int i = 0; i < 5; i++) {
    bispo++;
    printf("%d - Diagonal esquerda\n", bispo);
  }
  
  printf("\n===========RAINHA================\n");
  do
  {
    rainha++;
    printf("%d - Diagonal direita\n", rainha);
  } while (rainha < 8);
  
  printf("\n===========CAVALO===============\n");
  for(int i = 1; i <= 1; i++) {
    for (int j = 0; j < 2; j++)
    {
      printf("Cima\n");
    }
    printf("Direita\n");
  }
  return 0;
}

    torre++;
    printf("%d - Direita\n", torre);
  }
  
  printf("===========BISPO================\n");
  // BISPO
  for (int i = 0; i < 5; i++) {
    bispo++;
    printf("%d - Diagonal esquerda\n", bispo);
  }
  
  printf("===========RAINHA================\n");
  do
  {
    rainha++;
    printf("%d - Diagonal direita\n", rainha);
  } while (rainha < 8);
  return 0;
}
