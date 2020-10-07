/* 
 * ALGORITMOS PARA ENGENHARIA II  - 2020/2
 * Aluno: Alison Alain de Oliveira
 * Matrizes Lista 2
 * EXERCICIO 04
 */

#include <stdio.h>
#include <cstdlib>
#include <ctime>

int main()
{

    int matrizA[8][8];
    bool verifica = true;

    srand((int)time(0));

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            matrizA[i][j] = (rand() % 10) + 1;
            // matrizA[i][j] = (i+1) * (j + 1);
            printf("| %2d ", matrizA[i][j]);
        }
        printf("|\n");
    }

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (matrizA[i][j] != matrizA[j][i])
            {
                verifica = false;
            }
        }
    }

    printf("\n");

    if (verifica == true)
    {
        printf("Matriz SIMETRICA\n");
    }
    else
    {
        printf("Matriz NÃO SIMETRICA\n");
    }
}