#include <stdio.h>
/*
	Faça um programa que leia dois vetores X e Y de inteiros com 8 elementos cada um. Calcule e mostre os
vetores resultantes para cada caso a seguir:
a) Soma entre X e Y: soma de cada elemento de X com o elemento da mesma posição em Y.
b) Produto entre X e Y: multiplicação de cada elemento de X com o elemento da mesma posição em Y.
c) Interseção de conjuntos entre X e Y: apenas os elementos que aparecem nos dois vetores.
d) Diferença de conjuntos entre X e Y: todos os elementos de X que não existem em Y.
Imprima cada item em uma linha, sendo os valores separados entre si por um único espaço

*/

int main ()
{
	int X[8], Y[8];
	int i, j,tamint, tamdif, soma[8], prod[8], inter[8], dif[8];
	
	//lendo os dois vetores
	
	for(i = 0; i < 8; i++)
	{
		printf("Digite o numero da posicao [%d] do vetor X: \n", i);
		scanf("%d", &X[i]);
	}
	
	for(i = 0; i < 8; i++)
	{
		printf("Digite o numero da posicao [%d] do vetor Y: \n", i);
		scanf("%d", &Y[i]);
	}

	//soma entre X e Y
	
	for(i = 0; i < 8; i++)
	{
		soma[i] = X[i] + Y[i];
		printf("%d ", soma[i]);
	}
	
	printf("\n");
	
	
	//produto entre X e Y

	for(i = 0; i < 8; i++)
	{
		prod[i] = X[i] * Y[i];
		printf("%d ", prod[i]);
	
	}
	
	printf("\n");
	
	//interseção entre X e Y
	
	tamint = 0;
	
	for(i = 0; i < 8; i++)
	{
		for(j = 0; j < 8; j++)
		{
			if(X[i] == Y[j])
			{
				inter[tamint] = X[i];
				printf("%d ", inter[tamint]);
				tamint++;
			}
		}
	}
	
	printf("\n");
	
	//diferenca de conjuntos entre X e Y
	
	tamdif = 0;
	
	for(i = 0; i < 8; i++)
	{
		int existenoY = 0;
		for(j = 0; j < 8; j++)
		{
			if(X[i] == Y[j])
			{
				existenoY = 1;
				break;
			}
		}
		if(!existenoY)
		{
			dif[tamdif] = X[i];
			printf("%d ", dif[tamdif]);
			tamdif++;
		}
	}
	
	
	printf("\n");
	
	return 0;
}
