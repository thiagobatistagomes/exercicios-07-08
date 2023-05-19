#include <stdio.h>
/*
	Faça um programa que declare e leia um vetor com 10 números reais. Calcule e armazene em um segundo
vetor o quadrado de cada número real lido. Mostre os dois vetores na tela. Imprima cada vetor em uma linha,
com os números separados entre si por um único espaço.
*/
int main ()
{
	float vet[10], quadr[10];
	int i;
	
	// guardando valores no primeiro e segundo vetor
	for(i = 0; i < 10; i++)
	{
		printf("Digite um numero:\n");
		scanf("%f", &vet[i]);
		quadr[i] = vet[i] * vet[i];
	}

	
	
	
	//mostrar os dois vetores na tela
	for(i = 0; i < 10; i++)
	{
		printf("%.2f ", vet[i]);
	}
	
	printf("\n");
	
	for(i = 0; i < 10; i++)
	{
		printf("%.2f ", quadr[i]);
	}

	return 0;
}
