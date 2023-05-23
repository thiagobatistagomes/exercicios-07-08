#include <stdio.h>

/*
    Faça um programa que leia uma matriz 3x3. Essa matriz será preenchida apenas com elementos 0 e 1,
    representando um "jogo da velha". Imprima como resposta apenas "sim" ou "nao", informando se as marcações de "1" venceram a partida.
*/

int main()
{
    int matriz[3][3];
    int i, j;
    int venceu = 0;

    // Preenchendo a matriz
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }

    // Verificando as possíveis formas de vitória
    // Verificando linhas
    for (i = 0; i < 3; i++)
    {
        if (matriz[i][0] == 1 && matriz[i][1] == 1 && matriz[i][2] == 1)
        {
            venceu = 1;
            break;
        }
    }

    // Verificando colunas
    if (!venceu)
    {
        for (j = 0; j < 3; j++)
        {
            if (matriz[0][j] == 1 && matriz[1][j] == 1 && matriz[2][j] == 1)
            {
                venceu = 1;
                break;
            }
        }
    }

    // Verificando diagonais
    if (!venceu)
    {
        if ((matriz[0][0] == 1 && matriz[1][1] == 1 && matriz[2][2] == 1) ||
            (matriz[0][2] == 1 && matriz[1][1] == 1 && matriz[2][0] == 1))
        {
            venceu = 1;
        }
    }

    // Imprimindo o resultado
    if (venceu == 1)
    {
        printf("sim\n");
    }
    else
    {
        printf("nao\n");
    }

    return 0;
}
