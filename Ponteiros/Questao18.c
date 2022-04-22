#include <stdio.h>
#include <stdlib.h>

void multicarM(int **a, int **b, int **c, int nla, int ncl, int ncb)
{
    int i, j, k;
    for (int i = 0; i < nla; i++)
    {
        for (int j = 0; j < ncl; j++)
        {
            for (int k = 0; k < ncb; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

int main()
{

    int i, j, nla, nca, ncl, ncb;
    int **a, **b, **c;

    printf("Digite o numero de nla, ncl(linha b e coluna a), ncb:\n");
    scanf("%d %d %d", &nla, &ncl, &ncb);

    // aloca matrizes
    a = (int **)malloc(nla * sizeof(int *));
    b = (int **)malloc(ncl * sizeof(int *));
    c = (int **)malloc(nla * sizeof(int *));

    for (i = 0; i < nla; i++){
        a[i] = malloc(ncl * sizeof(int));
    }
    for (i = 0; i < ncl; i++){
        b[i] = malloc(ncb * sizeof(int));
    }
    for (i = 0; i < nla; i++){
        c[i] = malloc(ncb * sizeof(int));
    }


    // preencher vetor a,b e a multiplicacao em c;
    for (i = 0; i < nla; i++){
        for (j = 0; j < ncl; j++){
            a[i][j] = rand() % 10;
        }
    }
    for (i = 0; i < ncl; i++){
        for (j = 0; j < ncb; j++){
            b[i][j] = rand() % 10;
        }
    }
    multicarM(a, b, c, nla, ncl, ncb);

    // Imprimir vetores
    printf("\n Matriz A: \n");
    for (i=0; i < nla; i++){
        for(j=0; j<ncl;j++){
        printf("%2d ", a[i][j]);
        }
        printf("\n");
    }
    printf("\n Matriz B: \n");
    for (i=0; i < ncl; i++){
        for(j=0; j<ncb;j++){
        printf("%2d ", b[i][j]);
        }
        printf("\n");
    }
     printf("\n Matriz C (Multiplicacao): \n");
    for (i=0; i < nla; i++){
        for(j=0; j<ncb;j++){
        printf("%2d ", c[i][j]);
        }
        printf("\n");
    }

    for (i=0; i < nla; i++){
       free(a[i]);
       free(c[i]);
    }
    
    for (i=0; i < ncl; i++){
       free(b[i]);
    }
    free(a);
    free(b);
    free(c);


    return 0;
}
