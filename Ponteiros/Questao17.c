#include <stdio.h>
#include <stdlib.h>



int somavet(int *a, int *b, int *c, int n)
{
  int i;
  for (i = 0; i < n; i++)
  {
    c[i] = a[i] + b[i];
  }
  printf("\nVetor soma:\n");
  for (i = 0; i < n; i++)
  {
    printf("%d ", c[i]);free(c);
  }
}


int main()
{
  int i, n, *a, *b, *c;

  printf("Digite a quantidade de elemento dos vetores:");
  scanf("%d", &n);

  a = (int *)malloc(n * sizeof(int));
  b = (int *)malloc(n * sizeof(int));
  c = (int *)malloc(n * sizeof(int));

  for (i = 0; i < n; i++)
  {
    a[i] = rand() % 100;
  }

  for (i = 0; i < n; i++)
  {
    b[i] = rand() % 100;
  }
  printf("Vetor a:\n");
  for (i = 0; i < n; i++)
  {
    printf("%d ", a[i]);
  }
  printf("\nVetor b:\n");
  for (i = 0; i < n; i++)
  {
    printf("%d ", b[i]);
  }

  somavet(a, b, c, n);

  free(a);
  free(b);
  free(c);
}
