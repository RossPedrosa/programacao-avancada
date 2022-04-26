#include <stdio.h>
#include <stdlib.h>

float ordenar(float *v, int n)// Funcao para ordenar o vetor dinamico
{ 

  int i, j;
  float aux;

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
}

int main()
{
  int i, j, n;
  float *v, aux;

  printf("Digite a quantidade de elementos:");
  scanf("%d", &n);

  v = (float *)malloc(n * sizeof(float)); // Alocando o vetor

  for (i = 0; i < n; i++) // Preenchendo o vetor com elementos aleatorios float
  {
    v[i] = (float)((rand() % 10) / .55);
    // printf("Digite o elemento %d :", i);
    // scanf("%f", &v[i]);
  }

  printf("Seu vetor:");
  for (i = 0; i < n; i++)
  {
    printf("%g ", v[i]);
  }
  printf("\n");

  ordenar(v, n); // Chamada da funcao de ordenar

  printf("Vetor ordenado:");
  for (i = 0; i < n; i++)
  {
    printf("%g ", v[i]);
  }
  printf("\n");
  free(v); // Liberar memoria do vetor dinamico
}