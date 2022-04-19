#include <stdio.h>
#include <stdlib.h>

// Lista o vetor vet, acessando o conteúdo armazendo na memória somando 4 bites ao endereço.
 int main(){
  int vet[] = {4,9,13};
  int i;
  for(i=0;i<3;i++){
  printf("%d ",(vet+i));
  }
} 

// Lista os enderecos de memória em que esta armazenado cada elemento do vetor vet.
int main(){
  int vet[] = {4,9,13};
  int i;
  for(i=0;i<3;i++){
  printf("%X ",vet+i);
  }
}