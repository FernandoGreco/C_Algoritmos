#include <stdio.h>

void preencher (float t [7]){
int i;

for (i=0; 1<7; i++) {
	printf ("%da. temperatura?", i+1);
	scanf ("%f", &t [i]);
}
}
float media (float t [7]){
	int i;
	float s=0;
	
	for (i=0; i<7; i++) s += t[i];
	
	return s/7;
}

int conta (float t [7], float m){
	int i, d=0;
	
	for (i=0; i<7; i++)
	if (t[i]>m)
	d++;
	
	return d;
}

int main (void){
	float t [7], m;
	
	preencher (t);
	m=6media (t);
	printf ("\nDias com temperatura acima da media = %d\n", conta (t,m));

	 return 0;
	
}
