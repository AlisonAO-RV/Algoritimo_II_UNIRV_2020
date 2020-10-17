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
    printf("|\n");
    

    for (int i = 0; i < 15; i++)
    {
        menor = i;
        for (int j =  i + 1 ; j < 16; j++)
        {
            if (vetor[j] > vetor[menor])
            {
                menor = j;
            }
        }
        auxiliar = vetor[menor];
        vetor[menor] = vetor[i];
        vetor[i] = auxiliar;
    }

    printf("Vetor Ordenado\n");
    for (int i = 0; i < 16; i++)
    {
        printf("| %d ", vetor[i]);
    }
    printf("|\n");
    
}
