/* 
 * ALGORITMOS PARA ENGENHARIA II  - 2020/2
 * Aluno: Alison Alain de Oliveira
 * Ordenação
 * EXERCICIO 02
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int vetorA[18] = {7, 13, 3, 4, 20, 5, 8, 9, 12, 10, 8, 7, 5, 2, 2, 3, 6, 1};
    int vetorB[13] = {20, 18, 14, 13, 12, 10, 9, 8, 7, 4, 3, 2, 1};
    int vetorC[13] = {1, 2, 3, 4, 7, 8, 9, 10, 12, 13, 15, 18, 20};
    int auxiliar = 0;

    printf("Vetor A Original\n");
    for (int i = 0; i < 18; i++)
    {
        printf("| %d ", vetorA[i]);
    }
    printf("|\n");

    auxiliar = 0;
    for (int i = 0; i < 18; i++)
    {
        for (int j = 0; j < 17; j++)
        {
            if (vetorA[j] > vetorA[j + 1])
            {
                auxiliar = vetorA[j];
                vetorA[j] = vetorA[j + 1];
                vetorA[j + 1] = auxiliar;
            }
        }
    }

    printf("Vetor A Ordenado\n");
    for (int i = 0; i < 18; i++)
    {
        printf("| %d ", vetorA[i]);
    }
    printf("|\n");

    //---------------------------------------------

    printf("\n\nVetor B Original\n");
    for (int i = 0; i < 13; i++)
    {
        printf("| %d ", vetorB[i]);
    }
    printf("|\n");

    auxiliar = 0;
    for (int i = 0; i < 13; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            if (vetorB[j] > vetorB[j + 1])
            {
                auxiliar = vetorB[j];
                vetorB[j] = vetorB[j + 1];
                vetorB[j + 1] = auxiliar;
            }
        }
    }

    printf("Vetor B Ordenado\n");
    for (int i = 0; i < 13; i++)
    {
        printf("| %d ", vetorB[i]);
    }
    printf("|\n");

    //---------------------------------------------

    printf("\n\nVetor C Original\n");
    for (int i = 0; i < 13; i++)
    {
        printf("| %d ", vetorC[i]);
    }
    printf("|\n");

    auxiliar = 0;
    for (int i = 0; i < 13; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            if (vetorC[j] > vetorC[j + 1])
            {
                auxiliar = vetorC[j];
                vetorC[j] = vetorC[j + 1];
                vetorC[j + 1] = auxiliar;
            }
        }
    }

    printf("\nVetor C Ordenado\n");
    for (int i = 0; i < 13; i++)
    {
        printf("| %d ", vetorC[i]);
    }
    printf("|\n");
}
