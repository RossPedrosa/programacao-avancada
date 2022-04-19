#include <stdio.h>

int main(){
char x[4];
int y[4];
float z[4];
double v[4];

printf("x char:%d\n", x);
printf("x char:(x+1): %d\n", (x+1));
printf("x char:(x+2): %d\n", (x+2));
printf("x char:(x+3): %d\n", (x+3));
printf("\n");
printf("x int:%d\n", y);
printf("x int:(x+1): %d\n", (y+1));
printf("x int:(x+2): %d\n", (y+2));
printf("x int:(x+3): %d\n", (y+3));
printf("\n");
printf("x float:%d\n", z);
printf("x float:(x+1): %d\n", (z+1));
printf("x float:(x+2): %d\n", (z+2));
printf("x float:(x+3): %d\n", (z+3));
printf("\n");
printf("x double:%d\n", v);
printf("x double:(x+1): %d\n", (v+1));
printf("x double:(x+2): %d\n", (v+2));
printf("x double:(x+3): %d\n", (v+3));

}

// Comparando as responstas com o que foi idealizado na questão anterior,
// as expectativa foi aceita, porém foi susposto que int ocupa 2 bytes e o tamanho que int ocupa é 4 byte