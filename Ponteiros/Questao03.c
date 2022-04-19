#include <stdio.h>

int main()
{
    int i = 5, j = 2, *q, *p;

    p = i;           // p recebe valor inteiro armazenado em i
    q = &j;          // q recebe endereço de memoria de j, correto.
    p = &*&i;        // p recebe endereço do ponteiro do endereço i
    i = (*&)j;       // Ilegal, expressão incorreta
    i = *&j;         // i recebe ponteiro com endereço j
    i = &&j;         // Ilegal
    q = *p;          // q recebe o endereço armazenado em p, correto.
    i = (*p)++ + *q; // Acresmenta em e p inteiro que p aponta e soma ao que q aponta, correta.
}