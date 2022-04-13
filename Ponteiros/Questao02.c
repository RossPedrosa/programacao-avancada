
#include <stdio.h>

int main()
{
int i=5, *p;
p = &i;
printf("%x %d %d %d %d", p,*p+2,**&p,3**p,**&p+4);
}

// p retona o endereço de memoria, foi suposto que p = 4094 ;
//*p+2 retorna  7, valor armazenado em i mais 2;
//**&p retorna 5, valor armazenado em i;
// 3**P retorna 15, valor armazenado em i vezes 3;
// **&p+4 retorna 9, valor armazenado em i mais 4;
