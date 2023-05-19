#include <stdio.h>
/*
	Faça um programa que leia uma matriz 4x4. A seguir, mostre como resposta quantos valores pares e
quantos valores ímpares estão presentes na matriz. Imprima os valores da resposta em uma única linha,
separados por um único espaço.
*/
int main ()
{
	int x[4][4]={0};
	int i, j, somaPares = 0, somaImpares = 0;
	
	
	// preenchendo a matriz 4x4
	for(i = 0; i < 4; i++)
	{
		for(j = 0; j < 4; j++)
		{
			printf("Digite o valor da posicao (%d,%d): \n", i, j);
			scanf("%d", &x[i][j]);
		}
	}
	
	// verificar quantos valores pares e quantos valores impares estao presentes na matriz
	for(i = 0; i < 4; i++)
	{
		for(j = 0; j < 4; j++)
		{
			if(x[i][j] % 2 == 0)
			{
				somaPares++;
			}
			else
			{
				somaImpares++;
			}
		}
	}
	
	//mostrando o resultado
	printf("Numero de pares: %d\n", somaPares);
	printf("Numero de impares: %d\n", somaImpares);


	return 0;
}
