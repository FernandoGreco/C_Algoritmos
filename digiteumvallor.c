
#include <stdio.h>
int main()
{
	
	int m[3][2], l, c;
	for( l = 0; l < 3; l++ )
		for( c = 0; c < 2; c++ )
		{
			printf("Digite um valor: ");
			scanf("%d", &m[l][c]);
		}
		
			  for( l = 0; l < 3; l++ )
		      for( c = 0; c < 2; c++ )
			printf( "%d\t", m[l][c] );
		
		printf("\n");
	
		
		
	return( 0 );
}


