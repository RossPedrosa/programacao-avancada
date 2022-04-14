#include <stdio.h>

int main() {

  int valor;
  int *p1;
  float temp;
  float *p2;
  char aux;
  char *nome = "Ponteiros";
  char *p3;
  int idade;
  int vetor[3];
  int *p4;
  int *p5;

  /* (a) */
  valor = 10;
  p1 = &valor;
  *p1 = 20;
  printf("%d \n", valor);        //Retorna valor 20

  /* (b) */
  temp = 26.5;
  p2 = &temp;
  *p2 = 29.0;
  printf("%.1f \n", temp);      //Retorna valor 29.0

  /* (c) */
  p3 = &nome[0];
  aux = *p3;
  printf("%c \n", aux);         //Retorna 'P'

  /* (d) */
  p3 = &nome[4];
  aux = *p3;
  printf("%c \n", aux);         //Retorna 'e'

  /* (e) */

  p3 = nome;
  printf("%c \n", *p3);         //Retorna 'P', dado armazenado no primeiro elemento nome
  /* (f) */
  p3 = p3 + 4;
  printf("%c \n", *p3);         //Retorna 'e', dado armazenado 4 bits adiante na memoria

  /* (g) */
  p3--;
  printf("%c \n", *p3);         //Retorna 't', dado armazenado na memoria p deslocada menos um 1 bit 

  /* (h) */
  vetor[0] = 31;
  vetor[1] = 45;
  vetor[2] = 27;
  p4 = vetor;
  idade = *p4;
  printf("%d \n", idade);       //Retorna 31, dado armazenado no primeito elemento do vetor 

  /* (i) */
  p5 = p4 +1;
  idade = *p5;
  printf("%d \n", idade);       //Retorna 45, deslocou 1 elemento adiante

  /* (j) */
  p4 = p5 +1;
  idade = *p4;
  printf("%d \n", idade);       //Retorna 27, deslocou 1 elemento adiante 

  /* (l) */
  p4 = p4 -2;
  idade = *p4;
  printf("%d \n", idade);       //Retorna 31, deslocou 2 elementos anteriormente
  
  /* (m) */
  p5 = &vetor[2] - 1;
  printf("%d \n", *p5);         //Retorna 45, endereço do vetor menos 1
  /* (n) */
  p5++;
  printf("%d \n", *p5);         //Retorna 27, deslocou no espaço de menoria 1 adiante
  return(0);
}