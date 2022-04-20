#include <stdio.h>
#include <stdlib.h>

int  compare (const void *a, const void *b) // Funcao para comparar os elementos. 
{
    return (*(int *)a - *(int *)b);         
}

int main()
{
    int i,  n;    // Declaracao das variaveis utilizadas no programa 
    float *v;     // Variavel ponteiro para o vetor 

    printf("Digite a quantidade de elementos:"); //Usuário digitar quantidades de elementos para o vetor
    scanf("%d", &n);

    v = (float *)malloc(n * sizeof(float));  // Alocando o vetor de n digitos 

    for (i = 0; i < n; i++){
        printf("Digite o elemento %d :", i);  // Recebe os elementos do vetor pelo usuário
        scanf("%f", &v[i]);
    }
    printf("Seu vetor:");
    for (i = 0; i < n; i++){
        printf("%g ", v[i]);    //Imprimir vetor digitado
    }
    printf("\n");

    qsort(v, n, sizeof(float),  compare); // funcao de ordenacao Qsort

    printf("Vetor ordenado:");
    for (i = 0; i < n; i++){
        printf("%g ", v[i]);  // Imprimir vetor ordenado
    }
    printf("\n");

    free(v);  // libera a memoria na qual o vetor esta armazenado
    return (0);
}