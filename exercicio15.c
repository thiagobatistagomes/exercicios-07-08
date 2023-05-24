#include <stdio.h>

/*
Faça um programa que leia uma matriz NxN, onde o usuário informa o valor de N. A seguir, verifique se 
ela forma um quadrado mágico. Um quadrado mágico é aquele em que a soma de todas as linhas, todas as 
colunas e todas as diagonais é a mesma. Imprima como resposta apenas um “sim” ou “nao”.
*/

int main()
{
    int N;
    int i, j;
    int soma = 0;
    int somaLinha, somaColuna, somaDiagonalPrincipal, somaDiagonalSecundaria;

    // Lendo o valor de N
    scanf("%d", &N);

    // Declarando a matriz
    int x[N][N];

    // Lendo a matriz
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            scanf("%d", &x[i][j]);
        }
    }

    // Calculando a soma das linhas
    for (i = 0; i < N; i++)
    {
        somaLinha = 0;
        for (j = 0; j < N; j++)
        {
            somaLinha += x[i][j];
        }
        if (i == 0)
        {
            soma = somaLinha;
        } else if (somaLinha != soma)
        {
            printf("nao\n");
            return 0;
        }
    }

    // Calculando a soma das colunas
    for (j = 0; j < N; j++)
    {
        somaColuna = 0;
        for (i = 0; i < N; i++)
        {
            somaColuna += x[i][j];
        }
        if (somaColuna != soma)
        {
            printf("nao\n");
            return 0;
        }
    }

    // Calculando a soma da diagonal principal
    somaDiagonalPrincipal = 0;
    for (i = 0; i < N; i++)
    {
        somaDiagonalPrincipal += x[i][i];
    }
    if (somaDiagonalPrincipal != soma)
    {
        printf("nao\n");
        return 0;
    }

    // Calculando a soma da diagonal secundária
    somaDiagonalSecundaria = 0;
    for (i = 0; i < N; i++)
    {
        somaDiagonalSecundaria += x[i][N - i - 1];
    }
    if (somaDiagonalSecundaria != soma)
    {
        printf("nao\n");
        return 0;
    }

    // Se todas as somas forem iguais, é um quadrado mágico
    printf("sim\n");

    return 0;
}