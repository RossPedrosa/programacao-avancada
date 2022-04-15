#include <stdio.h>

int main(void)
{
    *(pulo + 2); // Essa é a expressão que referencia o valor do terceiro elemento do vetor pulo,
                 // pois acessa o conteudo do vetor deslocando 2 posições (0,1,2)

    *(pulo + 4); // Retorna o valor do 5 elemento
    pulo + 4;    // Retorna o endereço de memoria do 5 elemento
    pulo + 2;    // Retorna o endereço de memoria do 3 elemento
}
