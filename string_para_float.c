#include<stdio.h>
	#include<stdlib.h>

	int main ()
	{
		double a,b;
		char buffer [256];
		printf ( "Input: " );
		gets (buffer);
		a = atof (buffer);
		b = a/2;
		printf ( "a= %f and b= %f\n" , a, b );
		return 0;
	}
