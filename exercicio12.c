#include <stdio.h>
/*
	Faça um programa que leia uma matriz MxN, onde o usuário informa os valores de M e N. Mostre como
resposta o valor do maior elemento presente na matriz, a linha e a coluna em que ele se encontra.
*/
int main()
{
	int M, N;
	int i, j, maior, lin, col;
	
	//usuario informa os valores de M e N
	printf("Informe quantas linhas [M] e quantas colunas [N] a matriz tera: \n");
	scanf("%d %d", &M, &N);
	
	//declaracao da matriz
	
	int x[M][N];

	//preenchendo a matriz
	for(i = 0; i < M; i++)
	{
		for(j = 0; j < N; j++)
		{
			printf("Informe o valor que deseja na posicao (%d, %d):\n", i, j);
			scanf("%d", &x[i][j]);
		}
	}
	
	//verificar qual o maior elemento da matriz e qual linha e coluna ele se encontra
	maior = x[0][0];
	for(i = 0; i < M; i++)
	{
		for(j = 0; j < N; j++)
		{
			if(x[i][j] > maior)
			{
				maior = x[i][j];
				lin = i;
				col = j;
			}
			
		}
	}
	
	printf("Valor do maior elemento da matriz: %d\n", maior);
	printf("Linha e Coluna em que ele se encontra: (%d,%d)\n", lin, col);

	return 0;
}
