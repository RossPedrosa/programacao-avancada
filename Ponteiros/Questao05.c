#include <stdio.h>

int main(void)
{

  float vet[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
  float *f;
  int i;
  f = vet;
  printf("contador/valor/valor/endereco/endereco");
  for (i = 0; i <= 4; i++)
  {
    printf("\n i = %d", i);                      // Retorna os valores de i (De 0 a 4)
    printf("vet[%d] = %.1f", i, vet[i]);         // Retorna cada elemento de vet, acessando diretamente de vet  
    printf("*(f + %d) = %.1f", i, *(f + i));     // Retorna cada elemento de vet, com o ponteiro f acessando cada endereço de memoria
    printf("&vet[%d] = %X", i, &vet[i]);         // Retorna o endereço de memoria de vet para cada elemento
    printf("(f + %d) = %X", i, f + i);           // Retorna o endereço de memoria que f aponta
  }
}
  // Exemplo de resposta esperada: i = 1 vet[1] = 2.2 *(f+1)= 2.2 &vet[1] = endereco (f + 1) = endereco
  