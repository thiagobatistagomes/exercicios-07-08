#include <stdio.h>
/*
	Faça um programa que leia um vetor de char com 8 posições e, a 			seguir, mostre os valores lidos em
ordem inversa.
*/
int main ()
{
	char vet[8];
	int i;
	
	// lendo os valores do vetor
	for(i = 0; i < 8; i++)
	{
		scanf(" %c", &vet[i]);
	}
	
	// mostrando os valores em ordem inversa
	for(i = 7; i >= 0; i--)
	{
		printf("%c ", vet[i]);
	}
	



	return 0;
}
