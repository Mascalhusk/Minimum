#include<stdio.h>
#include<stdlib.h>
#define tam 1369

void ReadAndWrite(double *E, double *P1, double *P2, FILE*leitura)
{	int i;
	double a, b, c;
	
	while(fscanf(leitura, "%lf %lf %lf", &a, &b, &c)!=EOF)
	{	P1[i] = a; P2[i] = b; E[i] = c;	
		printf("%lf\t %lf\t %lf \n", P1[i], P2[i] ,E[i]) ; i++;	
	}
	printf("\n");
}

int main(int argc, char *argv[])
{	double *E, *P1, *P2;
	FILE *leitura;
	leitura = fopen(argv[1], "r");

	E = malloc((tam)*sizeof(double));
	P1 = malloc((tam)*sizeof(double));
	P2 = malloc((tam)*sizeof(double));
	
	ReadAndWrite(E, P1, P2, leitura);

}
