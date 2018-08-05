#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct empresas{

char nempresa[100],email[100],end[100],cidade[100];
char cnpj[100],fone[100],cep[100];

}*vempresa;

vempresa *tes= (struct empresas *) malloc (n * sizeof(struct empresas));



void cadastro_empresa(){   
     
        system("cls");
        
        if(empresa_cadastrada == 1){ // Verifica se a empresa já foi cadastrada.
              printf("Sua empresa ja foi cadastrada\nDeseja Alterar Dados?\n1 - Sim\n2 - Nao\n\n");
              scanf("%d",&alterardados);
              
              if(alterardados == 2){
              
              
              return(0); 
              system("cls");
                      
              
                                    }
                                    }       
       
          main(){
		  }   
           
          printf(" ****** Cadastrar Empresa ******\n\n");      
        
          printf("Nome da empresa: ");
           scanf("%s",vempresa.nempresa);
         
          printf("E-Mail:");
           scanf("%s",&vempresa.email);
       
         
           printf("CNPJ: ");
            scanf("%s",&vempresa.cnpj);
             while(strlen(vempresa.cnpj) != 14){
                printf("Por favor, digite corretamente o CNPJ.\nCNPJ: ");
                scanf("%s",&vempresa.cnpj);
                                      }
        
          
             printf("Fone: ");
              scanf("%s",&vempresa.fone);
               while(strlen(vempresa.fone) != 8){
                  printf("Por favor, digite corretamente o telefone.\nFone: ");
                  scanf("%s",&vempresa.fone);
                                       }
           
             printf("CEP:");
              scanf("%s",&vempresa.cep);
               while(strlen(vempresa.cep) != 8){
                  printf("Por favor, digite corretamente o cep.\nCEP: ");
                  scanf("%s",&vempresa.cep);
                                      }
         
             printf("Endereco: ");
               scanf("%s",vempresa.end);
         
             printf("Cidade: ");
               scanf("%s",&vempresa.cidade);
         
             printf("\n\n");
             
             empresa_cadastrada = 1; // Ativa o ok, para não cadastrar novamente a empresa.
             
             
             }
         }
