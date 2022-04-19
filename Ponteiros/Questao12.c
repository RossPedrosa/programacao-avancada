
/*O que é um ponteiro para uma função? 
Um ponteiro é uma variável que contém um endereço de outra variável. 
Para uma função a  utilização de ponteiros é possivel referencia o endereço da função e  
ser executada, sem a necessidade de escrever o nome da função de forma explicita. 
*/

#include <stdio.h>
 
int funcao(int a){ 
    return a+1;
}
int main(){
    int (*pf)(int) = funcao;  // Declara qual funcao o ponteiro aponta. Ponteiro recebe o parametro inteiro e retorna um inteiro                  
    printf("Valor = %d", pf(1)); // realiza a chamada da função atraves do ponteiro

}