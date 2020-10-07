/* 
 * ALGORITMOS PARA ENGENHARIA II  - 2020/2
 * Aluno: Alison Alain de Oliveira
 * Matrizes Lista 2
 * EXERCICIO 04
 */

#include <stdio.h>
#include <stdlib.h>
#include <cstdlib>
#include <ctime>

int main()
{

    int vetorA[18];
    int matrizA[3][6];
    int contador = 0;

    srand((int)time(0));

    printf("| VETOR - 18\n");
    for (int i = 0; i < 18; i++)
    {
        vetorA[i] = (rand() % 9) + 1;
        printf("| %d ", vetorA[i]);
    }
    printf("|\n\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            matrizA[i][j] = vetorA[contador];
            contador++;
        }
    }

    printf("| MATRIZ - 3X6\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            printf("| %d ", matrizA[i][j]);
        }
        printf("|\n");
    }
    printf("\n");
}