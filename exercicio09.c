#include <stdio.h>
/*
	Faça um programa que leia um vetor de inteiros de 8 posições. A seguir, imprima, em uma única linha, os
números primos que estão presentes no vetor. Separe os números da resposta por um único espaço.
*/

int main ()
{
	int x[8];
	int i, j, contdivisor;
	
	//preenchendo o vetor
	
	for(i = 0; i < 8; i++)
	{
		scanf("%d", &x[i]);
	}
	
	//verificando numeros primos presentes no vetor
	
	
	for(i = 0; i < 8; i++)
	{
		contdivisor = 0; //reiniciando o contador de divisores
		for (j = 1; j <= x[i]; j++)
		{
            		if (x[i] % j == 0)
            		{
                		contdivisor++;
            		}
        	}
        	
        	if(contdivisor == 2)
        	{
        		printf("%d ", x[i]);
        	}
	}
	
	printf("\n");
	

	


	return 0;
}
