/* 
 * ALGORITMOS PARA ENGENHARIA II  - 2020/2
 * Aluno: Alison Alain de Oliveira
 * Ordenação
 * EXERCICIO 07
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{

    // int vetor[9] = {3, 4, 8, 9, 7, 5, 2, 6, 1};
    int vetor[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int auxiliar = 0;
    int contadorTroca = 0;
    int contadorComparacao = 0;

    printf("Vetor Original\n");
    for (int i = 0; i < 9; i++)
    {
        printf("| %d ", vetor[i]);
    }
    printf("|\n\n");

    for (int i = 1; i < 9; i++)
    {
        for (int j = 0; j < 9 - i; j++)
        {
            if (vetor[j] < vetor[j + 1])
            {
                auxiliar = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = auxiliar;
                contadorTroca++;
                for (int i = 0; i < 9; i++)
                {
                    if (vetor[i] == vetor[j])
                    {
                        printf("| \33[0;33m%d\33[0m ", vetor[i]);
                    }
                    else if (vetor[i] == vetor[j + 1])
                    {
                        printf("| \33[0;33m%d\33[0m ", vetor[i]);
                    }

                    else
                    {
                        printf("| %d ", vetor[i]);
                    }
                }
                printf("|\n");
            }
            contadorComparacao++;
        }
        printf("\n");
    }

    printf("Comparação: %d \n", contadorComparacao);
    printf("Troca: %d \n", contadorTroca);
}
