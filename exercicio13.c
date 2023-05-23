#include <stdio.h>

/*
	Faça um programa que leia uma matriz MxN, onde o usuário informa os valores de M e N. Mostre como
resposta o valor do segundo maior elemento presente na matriz, a linha e a coluna em que ele se encontra.
*/

int main ()
{
	int M, N;
	int i, j, maior, segmaior, lin, col;
	
	//lendo os valores de M e N
	
	scanf("%d %d", &M, &N);
	
	//declarando a matriz
	
	int x[M][N];
	
	//preenchendo a matriz
	
	for(i = 0; i < M; i++)
	{
		for(j = 0; j < N; j++)
		{
			scanf("%d", &x[i][j]);
		}
	}


	//descobrir o segundo maior elemento da matriz
	
	maior = x[0][0];
	segmaior = x[0][0];
	
	for(i = 0; i < M; i++)
	{
		for(j = 0; j < N; j++)
		{
			if(x[i][j] > maior)
			{
				segmaior = maior;
				maior = x[i][j];
			}
			else if(x[i][j] > segmaior && x[i][j] < maior)
			{
				segmaior = x[i][j];
			
			}
		}
	}
	
	//verificando a linha e coluna
	
	lin = 0;
	col = 0;
	
	for(i = 0; i < M; i++)
	{
		for(j = 0; j < N; j++)
		{
			if(x[i][j] == segmaior)
			{
				lin = i;
				col = j;
			}
		}
	}
	
	printf("%d %d %d", segmaior, lin, col);






	return 0;
}
