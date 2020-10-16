/* 
 * ALGORITMOS PARA ENGENHARIA II  - 2020/2
 * Aluno: Alison Alain de Oliveira
 * Ordenação
 * EXERCICIO 05
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetorD[13] = {1, 2, 3, 4, 7, 8, 9, 10, 12, 13, 15, 18, 20};
    int auxiliar = 0;
    int contadorTroca = 0;
    int contadorComparacao = 0;

    printf("\n\nVetor Original Ordenado\n");
    for (int i = 0; i < 13; i++)
    {
        printf("| %d ", vetorD[i]);
    }
    printf("|\n");

    contadorTroca = 0;
    contadorComparacao = 0;
    auxiliar = 0;
    for (int i = 1; i < 13; i++)
    {
        for (int j = 0; j < 13 - i; j++)
        {
            if (vetorD[j] > vetorD[j + 1])
            {
                auxiliar = vetorD[j];
                vetorD[j] = vetorD[j + 1];
                vetorD[j + 1] = auxiliar;
                contadorTroca++;
            }
            contadorComparacao++;
        }
    }

    printf("Comparação: %d \n", contadorComparacao);
    printf("Troca: %d \n", contadorTroca);
}
