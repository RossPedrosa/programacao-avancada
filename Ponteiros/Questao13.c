#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i, j, n;
  float *v, aux;

  printf("Digite a quantidade de elementos:");
  scanf("%d", &n);

  v = (float *)malloc(n * sizeof(float));

  for (i = 0; i < n; i++)
  {
    printf("Digite o elemento %d :", i);
    scanf("%f", &v[i]);
  }

  printf("Seu vetor:");
  for (i = 0; i < n; i++)
  {
    printf("%g ", v[i]);
  }
  printf("\n");

  for (j = 1; j < n; j++)
  {
    for (i = 0; i < n - 1; i++)
    {
      if (v[i] > v[i + 1])
      {
        aux = v[i];
        v[i] = v[i + 1];
        v[i + 1] = aux;
      }
    }
  }

  printf("Vetor ordenado:");
  for (i = 0; i < n; i++)
  {
    printf("%g ", v[i]);
  }
  printf("\n");
  free(v);
}