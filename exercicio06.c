#include <stdio.h>
/*
	Faça um programa que leia um vetor de inteiros de 10 posições. A seguir, leia um valor X e mostre na tela
os elementos presentes no vetor que são múltiplos de X. Imprima os números em uma única linha, separados
entre si por um único espaço.
*/
int main ()
{
	int vet[10];
	int i, X;
	
	//preenchendo o vetor de 10 posicoes
	
	for(i = 0; i < 10; i++)
	{
		printf("Digite o numero da posicao [%d]: \n", i);
		scanf("%d", &vet[i]);
	}
	
	//lendo o valor de X
	
	printf("Digite um valor para X: \n");
	scanf("%d", &X);
	
	//multiplos de X presentes no vetor
	
	for(i = 0; i < 10; i++)
	{
		if(vet[i] % X == 0)
		{
			printf("%d ", vet[i]);
		}
	}
	
	printf("\n");



	return 0;
}
