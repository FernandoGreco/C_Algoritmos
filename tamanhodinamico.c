#include <stdio.h>
#include <stdlib.h>
// AlocMat: fun��o que vai alocar a matriz din�micamente
// retornando um ponteiro para a matriz(um ponteiro para ponteiros,
// por isso o ** no nome da fun��o).
int **AlocMat(int linhas, int colunas);
// FreeMat: fun��o que vai liberar a mem�ria alocada pela matriz.
int **FreeMat(int linhas, int colunas, int **mat);

int main() {
   // vari�veis que guardam o n�mero de linhas e colunas que a matriz ter�.
   int linhas, colunas;
   // Vari�veis para servirem como contadores.
   int x, y;
   // ponteiro para ponteiros que vai receber a matriz alocada dinamicamente.
   int **matriz;
   // solicita ao usu�rio que entre com o n�mero de colunase linhas que a
   // matriz ter�.
   printf("Rows and columns [rows cols]: ");
   scanf("%d%d", &linhas, &colunas);
   // checa se o usu�rio digitou n�meros v�lidos para colunas e linhas.
   if ((linhas < 1) || (colunas < 1)) {
      printf("\nFatal error! (function: main)\n");
      exit(1);
   }
   // aloca mem�ria para a matriz usando a fun��o AlocMat, que retorna um
   // ponteiro para ponteiros de int.
   matriz = AlocMat(linhas, colunas);
   // testa se a matriz foi alocada corretamente, e se nao foi, aborta a
   // execu��o do programa.
   if (matriz == NULL) {
      printf("\nFatal error! (function: main)\n");
      exit(1);
   }
   // preenche as linhas e colunas da matriz com n�meros inteiros.
   for (x = 0 ; x < linhas ; x++) {
      for (y = 0 ; y < colunas ; y++) {
         matriz[x][y] = y + (x * 10);
      }
   }
   // exibe todos os valores armazenados na matriz em forma de �rvore.
   for (x = 0 ; x < linhas ; x++) {
      printf("[%p]\n", &matriz[x]);
      for (y = 0 ; y < colunas ; y++) {
         printf("|----[%p]\t->\t%05d\n", &matriz[x][y], matriz[x][y]);
      }
   }
   // libera o espa�o em mem�ria alocado pela matriz
   FreeMat(linhas, colunas, matriz);
   
   return 0;
}

int **AlocMat(int linhas, int colunas) {
   // declara a vari�vel 'x' que servir� como contador, e um ponteiro
   // para ponteiros '**v' que receber� a matriz alocada e ser� o
   // valor de retorno da fun��o.
   int x, **v;
   // checando se os par�metros passados s�o v�lidos.
   if ((linhas < 1) || (colunas < 1)) return NULL;
   // aloca espa�o para as linhas, que ser� vetores para vetores, por
   // isso � necess�rio a convers�o (int **).
   v = (int **)calloc(linhas, sizeof(int));
   // checa se as linhas foram alocadas corretamente e caso n�o trenham
   // sido, aborta a execu��o do programa.
   if (v == NULL) {
      printf("\nFatal Error! (function: AlocMat)\n");
      exit(1);
   }
   // percorre as linhas alocadas na matriz
   for (x = 0 ; x < linhas ; x++) {
      // em cada linha, aloca um vetor/ponteiro para inteiros
      // com tamanho definido pelo usu�rio
      v[x] = (int *)calloc(colunas, sizeof(int));
      // checa se o vetor/ponteiro foi alocado corretamente, caso n�o
      // tenha sido, aborta a execu��o do programa
      if (v[x] == NULL) {
         printf("\nFatal Error! (function: AlocMat)\n");
         exit(1);
      }
   }
   // retorna o ponteiro de ponteiros(matriz).
   return v;
}

int **FreeMat(int linhas, int colunas, int **mat) {
   // vari�vel 'x' que servir� como contador.
   int x;
   // checa se os argumentos passados s�o v�lidos e caso n�o sejam,
   // a execu��o do programa � abortada.
   if ((linhas < 1) || (colunas < 1)) {
      printf("\nFatal Error! (function: FreeMat)\n");
      exit(1);
   }
   // se a matriz passada como par�metro for NULL, ent�o a fun��o
   // retorna NULL.
   if (mat == NULL) return NULL;
   // percorre as linhas da matriz, liberando o espa�o das 
   // colunas(vetores/ponteiros) em cada linha.
   for (x = 0 ; x < linhas ; x++) free(mat[x]);
   // libera a matriz em si.
   free(mat);
   // retorna NULL.
   return NULL;   
}
