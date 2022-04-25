#include <stdio.h>
#include <stdlib.h>

float mycompare(float a, float b)                      // Funcao para comparar os elementos.
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

void ordenar(float *v, int n, float(mycompare)(float, float)) // Funcao para ordenar os elementos
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

int main()
{
    int i, n;
    float *v;

    printf("Digite a quantidade de elementos:");
    scanf("%d", &n);

    v = (float *)malloc(n * sizeof(float));         // Alocando o vetor de n digitos

    for (i = 0; i < n; i++)
    {
        v[i] = (float)(rand()%100/.55);             //Recebe os elementos do vetor aleatorio
        //printf("Digite o elemento %d :", i);      // Recebe os elementos do vetor pelo usuário
        //scanf("%f", &v[i]);
    }
    printf("Seu vetor:");                           // Imprimir vetor digitado
    for (i = 0; i < n; i++)
    {
        printf("%g ", v[i]);
    }
    printf("\n");

   

    float (*myc)(float) = mycompare;               // Declara ponteiro para funcao
    ordenar(v, n, myc);                            //Chamada da funcao ordenar, com ponteiro para funcao de comparar


    printf("Vetor ordenado:");                      // Imprimir vetor ordenado
    for (i = 0; i < n; i++)
    {
        printf("%f ", v[i]);
    }
    printf("\n");

    free(v);                                        // libera a memoria do vetor 
    return (0);
}