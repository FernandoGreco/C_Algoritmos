#include <stdio.h>

int main()
 
{
	int n1,res,res2,res3;
	
    printf ("Digite um numero: ");
    scanf ("%d",&n1);
    
    res = n1*n1;
    res2 = res * n1;
        
    res3 = res2+8;
    
    printf ("O resultado e:%d",res3);
     
    getch ();
}
