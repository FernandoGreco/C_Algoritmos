#include <stdio.h>
#include <stdlib.h>
int main()
{
	int m[5][5], l, c;
	for( l = 0; l < 5; l++ )
		for( c = 0; c < 5; c++ )
			m[l][c] = 3;
			
			for( l = 0; l < 5; l++ )
	{
		for( c = 0; c < 5; c++ )
			printf( "%d\t", m[l][c] );
		
		printf("\n");
	}
	
}

