#include <stdio.h>
/*
	Faça um programa que leia uma matriz 4x4. A seguir, mostre como resposta quantos valores maiores
que 10 estão presentes na matriz
*/
int main ()
{
	int mat[4][4] = {0};
	int i, j, maiorq10 = 0;
	
	//ler a matriz
	for(i = 0; i < 4; i++)
	{
		for(j = 0; j < 4; j++)
		{
			printf("Digite o numero da posicao (%d %d):\n", i, j);
			scanf("%d", &mat[i][j]);
		}
	}
	
	//verificar os valores maiores que dez presentes na matriz
	for(i = 0; i < 4; i++)
	{
		for(j = 0; j < 4; j++)
		{
			if(mat[i][j] > 10)
			{
				maiorq10 ++;
			}
		}
	}
	
	//mostrar quantos valores maiores que dez estao presentes na matriz
	
	printf("Numeros maiores que 10 presentes na matriz: %d \n", maiorq10);





	return 0;
}
