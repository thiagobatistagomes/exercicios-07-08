#include <stdio.h>
/*
	Faça um programa que leia um vetor de inteiros de 12 posições. A seguir, mostre quantos números pares
e quantos números ímpares estão presentes no vetor. Imprima as respostas em uma única linha, separadas
entre si por um único espaço.


*/

int main ()
{
	int x[12];
	int i, pares, impares;
	
	//preenchendo o vetor
	
	for(i = 0; i < 12; i++)
	{
		printf("Digite o numero da posicao [%d]: \n", i);
		scanf("%d", &x[i]);
	}
	
	//verificando quantos numeros pares e impares
	
	pares = 0;
	impares = 0;
	
	for(i = 0; i < 12; i++)
	{
		if(x[i] % 2 == 0)
		{
			pares += 1;
		}
		else
		{
			impares += 1;
		}
	}
	
	printf("%d %d\n", pares, impares);	



	return 0;
}
