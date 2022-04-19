int main(){
   int mat[4], *p, x; 

   p = mat + 1;   // Valida. Acessa a proxima posição de memoria do vetor, e retornando o proximo elemento ; 
   p = mat++;     // Invalida. Operador ++ não pode acrementar um local de memória;
   p = ++mat;     // Invalida. Operador ++ não pode acrementar um local de memória;
   x = (*mat)++;  // Valida. Acrementa o vetor na posição mat[0] e retorna o primeiro elemento;
  
}