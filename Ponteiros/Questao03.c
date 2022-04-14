#include <stdio.h>

int main()
{
    int i = 5, j = 2, *q, *p;

    p = i;           // p recebe valor inteiro armazenado em i, porém é ilegal pois p deve receber endereço de memoria;
    q = &j;          // q recebe endereço de memoria de j, correto.
    p = &*&i;        // p recebe endereço do ponteiro do endereço i;
    i = (*&)j;       // Ilegal  i não recebe endereço de memoria e a expressão esta incompleta;
    i = *&j;         // i recebe ponteiro com endereço j
    i = &&j;         // Ilegal
    q = *p;          // q recebe o endereço armazenado em p, correto.
    i = (*p)++ + *q; // 

    printf("%d", *q);
}