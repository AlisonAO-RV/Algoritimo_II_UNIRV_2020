/* 
 * ALGORITMOS PARA ENGENHARIA II  - 2020/2
 * Aluno: Alison Alain de Oliveira
 * Matrizes Lista 2
 * EXERCICIO 02
 */

#include <stdio.h>
#include <cstdlib>
#include <ctime>

int main()
{

    int matrizA[4][7];
    int menorElemento = 0;
    int linhaDoMenor = 0;
    int maiorElemento = 0;
    int colunaDoMaior = 0;

    srand((int)time(0));

    printf("\n\n| MATRIZ MINMAX\n\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            matrizA[i][j] = (rand() % 99) + 1;
            printf("| %2d ", matrizA[i][j]);
        }
        printf("|\n");
    }

    menorElemento = matrizA[0][0];

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            if (matrizA[i][j] <= menorElemento)
            {
                menorElemento = matrizA[i][j];
                linhaDoMenor = i;
            }
        }
    }

    maiorElemento = matrizA[linhaDoMenor][0];

    for (int i = 0; i < 7; i++)
    {
        if (matrizA[linhaDoMenor][i] >= maiorElemento){
            maiorElemento = matrizA[linhaDoMenor][i];
            colunaDoMaior = i;
        }
    }

    printf("\n| Linha  %d - Valor: %d  - Menor Valor\n", linhaDoMenor + 1, menorElemento);
    printf("| Coluna %d - Valor: %d - Maior Valor\n\n\n", colunaDoMaior + 1, maiorElemento);
    
}