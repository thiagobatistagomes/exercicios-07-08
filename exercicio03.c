#include <stdio.h>
/*
	Faça um programa que declare e leia um vetor com 8 posições. A seguir, leia dois valores X e Y que
corresponderão a duas posições do vetor. Ao final, mostre a soma dos elementos presentes nas posições X e
Y. Seu programa não deve permitir que o usuário informe valores inválidos para X e Y.
*/
int main ()
{
	int vet[8];
	int i, X, Y, valX, valY, somaXY = 0;
	
	//ler as 8 posicoes do vetor
	for(i = 0; i < 8; i++)
	{
		printf("Digite um numero:\n");
		scanf("%d", &vet[i]);
	}
	
	//ler os dois valores X e Y
	printf("Informe o valor de X e Y:\n");
	scanf("%d %d", &X, &Y);
	
	//verificar se os valores de X e Y sao validos
	if(X >= 0 && X < 8 && Y >= 0 && Y < 8)
	{
		// pegar os elementos nas posicoes X e Y
		for(i = 0; i < 8; i++)
		{
			if(i == X)
			{
				valX = vet[i];
			}
			if(i == Y)
			{
				valY = vet[i];
			}
		}
	//somar os elementos nas posicoes X e Y
	somaXY = valX + valY;
	//mostrar o resultado da soma dos elementos em X e Y
	printf("A soma dos elementos presentes em %d e %d eh: %d\n", X, Y, 	somaXY);
	}
	else
	{
		printf("Valores invalidos.\n");
	}
	
	return 0;
}
