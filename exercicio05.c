#include <stdio.h>
/*
	Faça um programa que leia um vetor de inteiros de 10 posições. A seguir, mostre quais são o maior e o
menor elementos presentes no vetor. Na linha seguinte, imprima suas respectivas posições dentro do vetor.
Separe os valores da resposta por um único espaço.
*/
int main ()
{
	int x[10];
	int i, maior, menor;
	
	//preenchendo o vetor

	for(i = 0; i < 10; i++)
	{
		printf("Digite o numero da posicao [%d]: \n", i);
		scanf("%d", &x[i]);
	}
	
	//verificando maior elemento do vetor
	
	maior = x[0];
	
	for(i = 0; i < 10; i++)
	{
		if(x[i] > maior)
		{
			maior = x[i];
		}
	}
	
	// verificando o menor elemento do vetor
	
	menor = x[0];
	
	for(i = 0; i < 10; i++)
	{
		if(x[i] < menor)
		{
			menor = x[i];
		}
	}
	
	printf("%d %d\n", maior, menor);
	return 0;
}
