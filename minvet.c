#include<stdio.h>
#include<stdlib.h>

void ler(double *E, FILE*leitura)
{	int i;
	double a;
	
	while(fscanf(leitura, "%lf", &a)!=EOF)
	{	E[i] = a; i++;		}
	
}

int main(int argc, char *argv[])
{	double *E, a;
	FILE *leitura;

	E = malloc(sizeof(double));
	leitura = fopen(argv[1], "r");

	ler(E, leitura);

}
