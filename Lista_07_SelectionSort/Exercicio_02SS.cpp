/* 
 * ALGORITMOS PARA ENGENHARIA II  - 2020/2
 * Aluno: Alison Alain de Oliveira
 * Ordenação
 * EXERCICIO 02 - SelectSort
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[16] = {3, 4, 9, 2, 5, 8, 2, 1, 7, 4, 6, 2, 9, 8, 5, 1};
    int auxiliar = 0;
    int menor = 0;

    printf("Vetor Original\n");
    for (int i = 0; i < 16; i++)
    {
        printf("| %d ", vetor[i]);
    }
    printf("|\n\n");

    for (int i = 0; i < 15; i++)
    {
        menor = i;
        for (int j = i + 1; j < 16; j++)
        {
            if (vetor[j] > vetor[menor])
            {
                menor = j;
            }
        }
        auxiliar = vetor[menor];
        vetor[menor] = vetor[i];
        vetor[i] = auxiliar;

        for (int k = 0; k < 16; k++)
        {
            if (k == menor)
            {
                printf("| \33[0;33m%d\33[0m ", vetor[k]);
            }
            else if (k == i)
            {
                printf("| \33[0;33m%d\33[0m ", vetor[k]);
            }
            else
            {
                printf("| %d ", vetor[k]);
            }
        }
        printf("|\n");
    }

    printf("\nVetor Ordenado\n");
    for (int i = 0; i < 16; i++)
    {
        printf("| %d ", vetor[i]);
    }
    printf("|\n");
}
