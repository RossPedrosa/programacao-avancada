#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  int **x, **y, **z;
  int nl, nc, i, j, nlz, ncz;

  printf("digite numero de linhas (nl): ");
  scanf("%d", &nl);
  printf("digite numero de colunas (nc): ");
  scanf("%d", &nc);


  x = (int**)malloc(nl * sizeof (int*));
  y = (int**)malloc(nl * sizeof (int*));
  z = (int**)malloc(nl * sizeof (int*));

  nlz = nc;
  ncz = nl;

// Alocar X e Y (Copia de X)
  for(i=0;i<nl;i++){
    x[i]=malloc(nc*sizeof(int));
    y[i]=malloc(nc*sizeof(int));
  }
  for(i=0;i<nl;i++){
    for(j=0;j<nc;j++){
    x[i][j] = rand()%100;
    y[i][j] = x[i][j];
    }
  } 
 // for(i=0;i<nl;i++){ memcpy(y[i],x[i],sizeof(nc*sizeof(int)));  }
 // Alocar Z (Tranposta de X)

  for(i=0;i<nlz;i++){
    z[i]=malloc(nc*sizeof(int));
  }
  for(i=0;i<nlz;i++){
    for(j=0;j<ncz;j++){
    z[i][j] = x[j][i];
    }
  } 


// Mostrar X, Y e Z
  for(i=0;i<nl;i++){
    for(j=0;j<nc;j++){
    printf("%2d ", x[i][j]);
    }
    printf("\n");
  }
  for(i=0;i<nl;i++){
    for(j=0;j<nc;j++){
    printf("%2d " , y[i][j]);
    }
    printf("\n");
  }
    for(i=0;i<nlz;i++){
    for(j=0;j<ncz;j++){
    printf("%2d " , z[i][j]);
    }
    printf("\n");
  }
  

  for(i=0;i<nl;i++){
   free(x[i]);
   free(y[i]);
  }
  for(i=0;i<nlz;i++){
   free(z[i]);
  }
  free(x);
  free(y);
  free(z);
  return 0;
}