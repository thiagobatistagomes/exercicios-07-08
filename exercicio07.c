#include <stdio.h>
/*
	Um jogo de loteria é composto por números entre 1 a 25, sendo que o apostador escolhe 15 valores. Faça
um programa que leia e armazene em um vetor os 15 valores representando o palpite do apostador e leia em
um segundo vetor quais foram os 15 números sorteados. A seguir, mostre o total de acertos do apostador.

*/

int main ()
{
	int palpite[15];
	int sort[15];
	int i, j, acertos;
	
	//lendo o palpite do apostador
	
	for(i = 0; i < 15; i++)
	{
		printf("Digite seu %d palpite: \n", i);
		scanf("%d", &palpite[i]);
	}
	
	//lendo os numeros sorteados
	
	for(i = 0; i < 15; i++)
	{
		scanf("%d", &sort[i]);
	}
	
	//verificando o total de acertos do jogador
	
	acertos = 0;
	
	for(i = 0; i < 15; i++)
	{
		for(j = 0; j < 15; j++)
		{
			if(palpite[i] == sort[j])
			{
				acertos++;
			}
		}
	}
	
	printf("%d \n", acertos);



	return 0;
}
