#include <stdio.h>

int main(){
float aloha[10], coisas[10][5], *pf, value = 2.2;
int i=3;

aloha[2] = value;          //Valido
scanf("%f", aloha);        //Invalida
aloha = value;             //Invalido
printf("%f", aloha);       //Valido
coisas[4][4] = aloha[3];   //Valido
coisas[5] = aloha;         //Invalido
pf = value;                //Invalido
pf = aloha;                //Valido

}