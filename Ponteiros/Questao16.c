/*

Comparando os tempos

Com 5000 elementos

Ordenar
Tempo de execução: 80 (0.080000 s).

myqsort
Tempo de execução: 161 (0.161000 s).

qsort
Tempo de execução: 0 (0.000000 s).

Há uma diferença significativa entre o tempo de execução de cada função. A função qsort teve um excelente tempo de
execução com 0 segundos. Foi feito alguns testes e com 50.000 elementos que a função qsort marcou tempo de
2 segundos. A função criada myqsort foi a que teve maior tempo de execução, acredito que seja pela forma que
ela foi implementada, utilizando uma outra função para comparar os elementos.
*/


#include <stdio.h>
#include <time.h>
#include <limits.h>
#include <math.h>


float ordenar(float *v, int n){                          //Funcao para ordenar vetor (Questa 13)

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

float mycompare(float a, float b)                         // Funcao para comparar os elementos (Questão 15)
{
    if (a < b)
    {
        return -1;
    }
    if (a == b)
    {
        return 0;
    }
    if (a > b)
    {
        return 1;
    }
}

void myqsort(float *v, int n, float(mycompare)(float, float)) // Funcao para ordenar os elementos (Questão 15)
{
    int i, j;
    float aux;

    for (i = 1; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (mycompare(v[j], v[i]) == 1)
            {
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }
}

int  compare (const void *a, const void *b)               // Funcao para comparar os elementos utilizada pela qsort
{
    return (*(int *)a - *(int *)b);         
}

int main()
{
    clock_t t1, t2;                                       //Variavel para armazenar o tempo
    int i, n;
    float *v;

    printf("Digite a quantidade de elementos:");
    scanf("%d", &n);

    v = (float *)malloc(n * sizeof(float));               // Alocando o vetor de n digitos 
   
    for (i = 0; i < n; i++)
    {
        v[i] = (float)((rand()%10)/.5);                   //Recebe os elementos do vetor aleatorio
    }

    t1 = clock();                                         //Armazer o tempo para verificar tempo de execucao das funcoes

    ordenar(v,n);                                         //Chamada da funcao ordenar (Questao 13)

    //float (*myc)(float) = mycompare;                    // Declara ponteiro para funcao
    //myqsort(v, n, myc);                                 //Chamada da funcao ordenar, com ponteiro para funcao de comparar (Questão 15)

    //qsort(v, n, sizeof(float), compare);                // funcao de ordenacao Qsort (Questão 14)


    t2 = clock() - t1;                                    //Calcular tempo inicial - tempo final e imprimir na tela
    printf("%d (%f s).\n",
           t2,
           ((float)t2) / CLOCKS_PER_SEC);


    free(v);                                               // libera a memoria do vetor
    return (0);
}