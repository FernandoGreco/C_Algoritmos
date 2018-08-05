#include <stdio.h>

main()

{
	int m[5],i;
	
	for(i=0;i<5;i++)
	{

	printf("Numero: ");
	scanf("%d",&m[i]);	
		}
	for(i=4;i>=0;i--)
	printf("%d",m[i]);
	
	getch ();
}
