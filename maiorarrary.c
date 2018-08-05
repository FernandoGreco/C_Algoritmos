#include <stdio.h>

main()

{

 int i,lista[5]={1,14,3,7,8};
 int maior=lista[0];
     
     for(i=1;i<5;i++){
     if(maior<lista[i])
     maior=lista[i];
     }
     
          
printf ("maior:%d",maior);
       
getch ();

}
