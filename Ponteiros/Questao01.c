#include <stdio.h>

int main(){
   int i=3,j=5;
   int *p, *q;
   p = &i;
   q = &j;
   printf("Operacao 1:%d\n", p == &i);         // Retorna o valor 1 (True), pois "p" indica o endereço de i
   printf("Operacao 2:%d\n", *p - *q);         // Retorna o valor  -2. *p = 3 e *q = 5, 3-5=-2
   printf("Operacao 3:%d\n", **&p);            // Retorna o valor  3, valor armazenado em i
   printf("Operacao 4:%d\n", 3 - *p/(*q) + 7); // Retorna o valor  10. *p/(*q)=0, 3-0+7=10
}