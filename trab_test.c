#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
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
//INSERE DADOS PASSADOS NA MAIN EM STRUCT CIDADE
void lerCidade(struct cidade *cidade, int codigo, char nome[50], float latitude, float longitude) {
 cidade->codigo= codigo;
 strcpy(cidade->nome, nome);
 cidade->latitude=latitude;
 cidade->longitude=longitude;
}
//ATRAVÉS DA PESQUISA PELO PARAMETRO NOME, EXIBE TODOS DADOS DA STRUCT CIDADE
void  pesquisarPorNome(struct item *p, char nome[50]) {
 while (p != NULL) {
//COMPARA NOME ENVIADO POR PARAMETRO, COM NOME DA ESTRUTURA CIDADE 	
  if (strcmp(p->cidade.nome, nome) == 0 ){
   printf("Nome: %s - ",p->cidade.nome);
   printf("Cod.: %d - ",p->cidade.codigo);
   printf("Latitude %f - ",p->cidade.latitude);
   printf("Longitude %f\n",p->cidade.longitude);
   }
   p = p->prox;
 }
}
//FAZ PESQUISA ATRAVES DO PARAMETRO CODIGO ENVIADO NA MAIN
struct item *pesquisarPorCodigo(struct item *p, int codigo) {
 while (p != NULL) {
//COMPARA CODIGO ENVIADO POR PARAMETRO, COM CODIGO DA ESTRUTURA CIDADE
   if (p->cidade.codigo == codigo) {
   return(p);
  } else{
  	p = p->prox;
  }
 }
 return (NULL);
}

char calculo_distancia(struct item *p, char cidade_A[50],char cidade_B[50]) {
float a_lat,a_long,b_lat,b_long,delta_latitude,delta_longitude,delta_coordenadas,distancia_em_quilometros,valor_total;
 while (p != NULL) {
  if (strcmp(p->cidade.nome,cidade_A) == 0 ){
//tranforma latitude e longitude de cidade_A em valores absolutos
a_lat=abs(p->cidade.latitude);
a_long=abs(p->cidade.longitude);
    }
    //transforma latitude e longitude de cidade_B em valores absolutos
    if (strcmp(p->cidade.nome,cidade_B) == 0 ){
     	b_lat=abs(p->cidade.latitude);
		b_long=abs(p->cidade.longitude);
	 }
 //else { printf("\n%s",nome);
 // }
  p = p->prox;
 }

// CALCULA DISTANCIA
delta_latitude=a_lat-b_lat;
 delta_longitude=a_long-b_long;
 delta_coordenadas=pow( pow(delta_latitude,2) + pow(delta_longitude,2),0.5);
 distancia_em_quilometros=abs(delta_coordenadas*104);
 printf("\nDistancia aproximada entre %s e %s = %0.2fkm",cidade_A,cidade_B,distancia_em_quilometros);


//CALCULA VALOR TOTAL
 valor_total=distancia_em_quilometros*0.75;
 printf("\nValor total = %0.3f\n",valor_total);
}

int main() {
 struct item *p = NULL;
 struct cidade *
 resultado;
 struct cidade p1;
 int id=1; float latitude= -23.54750, longitude=-46.63611;
 lerCidade(&p1, id, "sao_paulo", latitude, longitude);
 inserirNaColecao(&p, p1);
 
 int id2=2; float latidude2=-22.90278, longitude2= -43.20750;
 struct cidade p2;
 lerCidade(&p2, id2,"rio_de_janeiro", latidude2,longitude2);
 inserirNaColecao(&p, p2);
 
 int id3=3; float latidude3=-27.59667, longitude3= -48.54917; 
 struct cidade p3;
 lerCidade(&p3, id3, "florianopolis", latidude3,longitude3);
 inserirNaColecao(&p, p3);
 
 int id4=4; float latidude4=-20.31944, longitude4 = -40.33778; 
 struct cidade p4;
 lerCidade(&p4, id4, "vitoria",latidude4, longitude4);
 inserirNaColecao(&p, p4);
 
//ENVIA NOME DE CIDADES PARA A  FUNÇÃO PESQUISARPORNOME
printf("PESQUISA POR NOME\n\n");
pesquisarPorNome(p, "florianopolis");
pesquisarPorNome(p, "sao_paulo");
pesquisarPorNome(p, "inexistente");
pesquisarPorNome(p, "rio_de_janeiro");


//PASSA POR PARAMETRO O VALOR DE ID PARA FUNÇÃO PESQUISAR_POR_CODIGO
printf("\n\nPESQUISA POR CODIGO\n\n");
resultado=pesquisarPorCodigo(p, 34);

if(resultado==NULL){
	printf("Codigo nao encontrado");
} else {
	printf("Id %d encontrado %s",resultado->codigo,resultado->nome);
}


//pesquisarPorCodigo(p, id);
//int id_inexistente=15;
//pesquisarPorCodigo(p, id_inexistente);

//PASSA POR PARAMETRO 2 CIDADES PARA SER CALCULADO A DISTANCIA E VALOR
printf("\n\nDISTANCIA APROXIMADA E VALOR TOTAL\n");
calculo_distancia(p, "sao_paulo","rio_de_janeiro");
calculo_distancia(p, "sao_paulo","florianopolis");
calculo_distancia(p, "florianopolis","rio_de_janeiro");
calculo_distancia(p, "vitoria","rio_de_janeiro");
}
