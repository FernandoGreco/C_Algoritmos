#include <stdio.h>
#include <stdlib.h>
// AlocMat: função que vai alocar a matriz dinâmicamente
// retornando um ponteiro para a matriz(um ponteiro para ponteiros,
// por isso o ** no nome da função).
int **AlocMat(int linhas, int colunas);
// FreeMat: função que vai liberar a memória alocada pela matriz.
int **FreeMat(int linhas, int colunas, int **mat);

int main() {
   // variáveis que guardam o número de linhas e colunas que a matriz terá.
   int linhas, colunas;
   // Variáveis para servirem como contadores.
   int x, y;
   // ponteiro para ponteiros que vai receber a matriz alocada dinamicamente.
   int **matriz;
   // solicita ao usuário que entre com o número de colunase linhas que a
   // matriz terá.
   printf("Rows and columns [rows cols]: ");
   scanf("%d%d", &linhas, &colunas);
   // checa se o usuário digitou números válidos para colunas e linhas.
   if ((linhas < 1) || (colunas < 1)) {
      printf("\nFatal error! (function: main)\n");
      exit(1);
   }
   // aloca memória para a matriz usando a função AlocMat, que retorna um
   // ponteiro para ponteiros de int.
   matriz = AlocMat(linhas, colunas);
   // testa se a matriz foi alocada corretamente, e se nao foi, aborta a
   // execução do programa.
   if (matriz == NULL) {
      printf("\nFatal error! (function: main)\n");
      exit(1);
   }
   // preenche as linhas e colunas da matriz com números inteiros.
   for (x = 0 ; x < linhas ; x++) {
      for (y = 0 ; y < colunas ; y++) {
         matriz[x][y] = y + (x * 10);
      }
   }
   // exibe todos os valores armazenados na matriz em forma de árvore.
   for (x = 0 ; x < linhas ; x++) {
      printf("[%p]\n", &matriz[x]);
      for (y = 0 ; y < colunas ; y++) {
         printf("|----[%p]\t->\t%05d\n", &matriz[x][y], matriz[x][y]);
      }
   }
   // libera o espaço em memória alocado pela matriz
   FreeMat(linhas, colunas, matriz);
   
   return 0;
}

int **AlocMat(int linhas, int colunas) {
   // declara a variável 'x' que servirá como contador, e um ponteiro
   // para ponteiros '**v' que receberá a matriz alocada e será o
   // valor de retorno da função.
   int x, **v;
   // checando se os parâmetros passados são válidos.
   if ((linhas < 1) || (colunas < 1)) return NULL;
   // aloca espaço para as linhas, que será vetores para vetores, por
   // isso é necessário a conversão (int **).
   v = (int **)calloc(linhas, sizeof(int));
   // checa se as linhas foram alocadas corretamente e caso não trenham
   // sido, aborta a execução do programa.
   if (v == NULL) {
      printf("\nFatal Error! (function: AlocMat)\n");
      exit(1);
   }
   // percorre as linhas alocadas na matriz
   for (x = 0 ; x < linhas ; x++) {
      // em cada linha, aloca um vetor/ponteiro para inteiros
      // com tamanho definido pelo usuário
      v[x] = (int *)calloc(colunas, sizeof(int));
      // checa se o vetor/ponteiro foi alocado corretamente, caso não
      // tenha sido, aborta a execução do programa
      if (v[x] == NULL) {
         printf("\nFatal Error! (function: AlocMat)\n");
         exit(1);
      }
   }
   // retorna o ponteiro de ponteiros(matriz).
   return v;
}

int **FreeMat(int linhas, int colunas, int **mat) {
   // variável 'x' que servirá como contador.
   int x;
   // checa se os argumentos passados são válidos e caso não sejam,
   // a execução do programa é abortada.
   if ((linhas < 1) || (colunas < 1)) {
      printf("\nFatal Error! (function: FreeMat)\n");
      exit(1);
   }
   // se a matriz passada como parâmetro for NULL, então a função
   // retorna NULL.
   if (mat == NULL) return NULL;
   // percorre as linhas da matriz, liberando o espaço das 
   // colunas(vetores/ponteiros) em cada linha.
   for (x = 0 ; x < linhas ; x++) free(mat[x]);
   // libera a matriz em si.
   free(mat);
   // retorna NULL.
   return NULL;   
}
