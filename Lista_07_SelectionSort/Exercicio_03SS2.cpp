/* 
 * ALGORITMOS PARA ENGENHARIA II  - 2020/2
 * Aluno: Alison Alain de Oliveira
 * Ordenação
 * EXERCICIO 03 - SelectSort
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[10] = {15, 10, 16, 28, 23, 5, 11, 21, 22, 13};

    int auxiliar = 0;
    int menor = 0;
    int cont = 0;

    for (int i = 0; i < 9; i++)
    {
        menor = i;
        for (int j = i + 1; j < 10; j++)
        {
            if (vetor[j] < vetor[menor])
            {
                menor = j;
            }
        }
        auxiliar = vetor[menor];
        vetor[menor] = vetor[i];
        vetor[i] = auxiliar;
        
        printf("Passagem: %d\n", i + 1);

        for (int k = 0; k < 10; k++)
        {
            printf("| %d ", vetor[k]);
        }
        printf("|\n");
    }
}
