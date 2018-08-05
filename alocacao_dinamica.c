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
 int flag=0;	
 while (p != NULL) {
//COMPARA NOME ENVIADO POR PARAMETRO, COM NOME DA ESTRUTURA CIDADE 	
  if (strcmp(p->cidade.nome, nome) == 0 ){
   printf("Nome: %s - ",p->cidade.nome);
   printf("Cod.: %d - ",p->cidade.codigo);
   printf("Latitude %f - ",p->cidade.latitude);
   printf("Longitude %f\n",p->cidade.longitude);
   flag=1;
   }
   p = p->prox;
 }if(flag==0)
 printf("cidade %s nao cadastrada\n",nome);
}
//FAZ PESQUISA ATRAVES DO PARAMETRO CODIGO ENVIADO NA MAIN
void pesquisarPorCodigo(struct item *p, int codigo) {
//VARIAVEL FLAG SERVE PARA IDENTIFICAR CODIGO NAO CADASTRADO	
 int flag=0;	
 while (p != NULL) {
//COMPARA CODIGO ENVIADO POR PARAMETRO, COM CODIGO DA ESTRUTURA CIDADE
   if (p->cidade.codigo == codigo) {
   printf("Codigo %d - ",p->cidade.codigo);
   printf("%s - ",p->cidade.nome);
   printf("Latitude %f - ",p->cidade.latitude);
   printf("Longitude %f\n",p->cidade.longitude);
   flag=1;
  } 
  p = p->prox;
 }
 //SE FLAG FOR IGUAL A ZERO SIGNIFICA Q O PRIMEIRO IF NAO FOI EXECUTADO, OU SEJA, QUE CIDADE NAO ESTA CADASTRADA
 if(flag==0)
 printf("Codigo %d nao esta cadastrado",codigo);
}

float calculo_distancia(struct item *p, char cidade_A[50],char cidade_B[50]) {
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
  p = p->prox;
 }

// CALCULA DISTANCIA
 delta_latitude=a_lat-b_lat;
 delta_longitude=a_long-b_long;
 delta_coordenadas=pow( pow(delta_latitude,2) + pow(delta_longitude,2),0.5);
 distancia_em_quilometros=delta_coordenadas*104;

//CALCULA VALOR TOTAL
 valor_total=distancia_em_quilometros*0.75;
// printf("\nValor total = RS %0.3f\n",valor_total);
 
  return(distancia_em_quilometros);
}

char calculo_valor_total(struct item *p, char cidade_A[50],char cidade_B[50]) {
 float distancia;
 distancia=calculo_distancia(p,cidade_A,cidade_B);
 printf("\ndistancia %0.2f",distancia);
//CALCULA VALOR TOTAL
// valor_total=distancia_em_quilometros*0.75;
// printf("\nValor total = RS %0.3f\n",valor_total);
}


int main() {
 struct item *p = NULL;
 struct cidade p1;
 
 lerCidade(&p1, 1, "sao_paulo", -23.54750, -46.63611);
 inserirNaColecao(&p, p1);
 
 float latidude2=-22.90278, longitude2= -43.20750;
 struct cidade p2;
 lerCidade(&p2, 2,"rio_de_janeiro", latidude2,longitude2);
 inserirNaColecao(&p, p2);
 
 float latidude3=-27.59667, longitude3= -48.54917; 
 struct cidade p3;
 lerCidade(&p3, 3, "florianopolis", latidude3,longitude3);
 inserirNaColecao(&p, p3);
 
 float latidude4=-20.31944, longitude4 = -40.33778; 
 struct cidade p4;
 lerCidade(&p4, 4, "vitoria",latidude4, longitude4);
 inserirNaColecao(&p, p4);
 
//ENVIA NOME DE CIDADES PARA A  FUNÇÃO PESQUISARPORNOME
printf("PESQUISA POR NOME\n\n");
pesquisarPorNome(p, "florianopolis");
pesquisarPorNome(p, "sao_paulo");
pesquisarPorNome(p, "rio_de_janeiro");
//ENVIA UMA CIDADE NAO CADASTRADO
pesquisarPorNome(p, "inexistente");

//PASSA POR PARAMETRO O VALOR DE ID PARA FUNÇÃO PESQUISAR_POR_CODIGO
printf("\n\nPESQUISA POR CODIGO\n\n");
pesquisarPorCodigo(p, 3);
pesquisarPorCodigo(p, 4);
pesquisarPorCodigo(p, 1);
pesquisarPorCodigo(p, 15);

//ENVIA UM ID NAO CADASTRADO


//PASSA POR PARAMETRO E IMPRIME DISTANCIA ENTRE 2 CIDADES 
printf("\n\nDISTANCIA APROXIMADA\n");
printf("\nDistancia entre Sao Paulo e Rio de Janeiro %0.2fkm",calculo_distancia(p, "sao_paulo","rio_de_janeiro"));
printf("\nDistancia entre Sao Paulo e Florianopolis %0.2fkm",calculo_distancia(p, "sao_paulo","florianopolis"));
printf("\nDistancia entre Vitoria e Rio de Janeiro %0.2fkm",calculo_distancia(p, "vitoria","rio_de_janeiro"));
printf("\nDistancia entre Florianopolis e Vitoria %0.2fkm",calculo_distancia(p, "florianopolis","vitoria"));

//PASSA POR PARAMETRO 2 CIDADES PARA SER CALCULADO O VALOR TOTAL
printf("\n\nVALOR TOTAL\n");
calculo_valor_total(p, "sao_paulo","rio_de_janeiro");
calculo_valor_total(p, "sao_paulo","florianopolis");
calculo_valor_total(p, "florianopolis","rio_de_janeiro");
calculo_valor_total(p, "vitoria","rio_de_janeiro");
}
