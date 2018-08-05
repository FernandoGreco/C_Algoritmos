#include <stdio.h>
#include <stdlib.h>
int main()
{
	int m[3][3], l, c;
	for( l = 0; l < 3; l++ )
		for( c = 0; c < 3; c++ )
			m[l][c] = rand()%20;
			
		{
		
			for( l = 0; l < 3; l++ )
		 for( c = 0; c < 3; c++ )
			printf( "%d\t", m[l][c] );
		 printf("\n");
	}

	return( 0 );
}

