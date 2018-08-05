#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct cidade {
 int codigo;
 char nome[50];
 float latitude;
 float longitude;
};

struct item {
 struct cidade cidade;
 struct item *prox;
};


struct item* alocarItem() {
 struct item *p = (struct item*) malloc(sizeof(struct item));
 if (p == NULL) {
  printf("Erro de alocacao de memoria...");
  exit(1);
 }
 return p;
}


void inserirNaColecao(struct item **p, struct cidade cidade) {
 struct item *aux = alocarItem();
 aux->cidade = cidade;
 aux->prox = *p;
 *p = aux;
}

void lerCidade(struct cidade *cidade, int codigo, char nome[50], float latitude, float longitude) {
 
 printf("\n - Codigo: %d", codigo);
 cidade->codigo= codigo;
 
 printf("\n - Nome: %s", nome);
 strcpy(cidade->nome, nome);
 
 printf("\n - Latitude: %0.5f", latitude);
 cidade->latitude=latitude;
 
 printf("\n - Longitude: %0.5f", longitude);
 cidade->longitude=longitude;
 
 printf("\n");
}

//através da pesquisa pelo parametro nome, exibe todos dados da struct cidade
void  pesquisarPorNome(struct item *p, char nome[50]) {
 while (p != NULL) {
  if (strcmp(p->cidade.nome, nome) == 0 ){
   printf("Nome: %s - ",p->cidade.nome);
   printf("Cod.: %d - ",p->cidade.codigo);
   printf("Latitude %f - ",p->cidade.latitude);
   printf("Longitude %f\n",p->cidade.longitude);
   }
 //else { printf("\n%s",nome);
 // }
  p = p->prox;
 }

}
/*
int pesquisarPorCodigo(struct item *p, int codigo) {
 while (p != NULL) {
   if (strcmp(p->cidade.codigo, codigo) == 0) {
   printf("Codigo %s - ",p->cidade.codigo);
   printf("%s - ",p->cidade.nome);
   printf("Latitude %f - ",p->cidade.latitude);
   printf("Longitude %f\n",p->cidade.longitude);
  }
  p = p->prox;
 }

}

float  calculo_distancia(struct item *p, char cidade_A[50],char cidade_B[50]) {
	float a,soma;
 while (p != NULL) {
  if (strcmp(p->cidade.nome,cidade_A) == 0 ){
   printf("%s",p->cidade.latitude);
  //tranforma string latitude em float
  a=atof(p->cidade.latitude);
  printf("\n%lf",a);
  soma=a+a;
  printf("\n\n%lf",soma);
    }
 //else { printf("\n%s",nome);
 // }
  p = p->prox;
 }

}*/

int main() {
 
 struct item *p = NULL;
 
 struct cidade p1;
 int id=1; float latitude= -23.54750, longitude=-46.63611;
 lerCidade(&p1, id, "sao_paulo", latitude, longitude);
 inserirNaColecao(&p, p1);

 int id2=2; float latidude2=-22.90278, longitude2= -43.20750;
 struct cidade p2;
 lerCidade(&p2, id2,"rio_de_janeiro", latidude2,longitude2);
 inserirNaColecao(&p, p2);
 /* 
 struct cidade p3;
 lerCidade(&p3, "3", "florianopolis", "-27,59667","-48,54917");
 inserirNaColecao(&p, p3);
 
 struct cidade p4;
 lerCidade(&p4, "4", "vitoria", "-20,31944","-40,33778");
 inserirNaColecao(&p, p4);*/

//faz pesquisa pelo nome da cidade e exibe todas informações da struct cidade, através da função pesquisarPorNome
printf("\nPESQUISA POR NOME\n\n");

pesquisarPorNome(p, "florianopolis");
pesquisarPorNome(p, "sao_paulo");
pesquisarPorNome(p, "inexistente");
pesquisarPorNome(p, "rio_de_janeiro");


printf("\nPESQUISA POR CODIGO\n\n");
//pesquisarPorCodigo(p, n1);
//pesquisarPorCodigo(p, "1");
//pesquisarPorCodigo(p, "2");
//pesquisarPorCodigo(p, "4");

printf("\nDISTANCIA APROXIMADA\n\n");

//calculo_distancia(p, "florianopolis","sao_paulo");
 
/* printf("\n");
 printf("\nPesquisar e-mail 'f@f.com'  | Nome : %s", pesquisarNomePorEmail(p, "f@f.com"));
 printf("\nPesquisar e-mail 'c@c.com'  | Nome : %s", pesquisarNomePorEmail(p, "c@c.com"));
 printf("\nPesquisar e-mail 'BBB'      | Nome : %s", pesquisarNomePorEmail(p, "BBB"));
 */
}
