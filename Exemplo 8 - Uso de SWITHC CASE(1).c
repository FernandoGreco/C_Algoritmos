#include<stdio.h>

int main(){
    float x,y,res;
    int i;
    printf("Digite um numero: ");
    scanf("%f",&x);
    printf("Digite outro numero: ");
    scanf("%f",&y);    
    
   do{
        	printf ("\n\nEscolha a operacao\n");
        	printf ("\t(1)...soma\n");
        	printf ("\t(2)...subtracao\n");
        	printf ("\t(3)...divisao\n");
        	printf ("\t(4)...multiplicacao\n\n");
        	scanf("%d", &i); 
   } 
   while ((i<1)||(i>4));
   
   switch(i){
             case 1:
                  res=x+y;
                  printf("\n %f+%f=%f",x,y,res);
                  break;
             case 2:
                  res=x-y;
                  printf("\n %f-%f=%f",x,y,res);
                  break;
             case 3:
                  if(y!=0){
                       res=x/y;
                       printf("\n %f/%f=%f",x,y,res);
                  }else{
                      puts("nao é possivel realizar esta operação(divisao por 0)");
                      }
                  break;
             case 4:
                  res = x*y;
                  printf("\n %f*%f=%f",x,y,res);
                  break;
   
   }
    getch();
    return(0);
}
