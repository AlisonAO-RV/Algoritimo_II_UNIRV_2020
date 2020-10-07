/* 
 * ALGORITMOS PARA ENGENHARIA II  - 2020/2
 * Aluno: Alison Alain de Oliveira
 * LISTA 02 - Vetor
 * EXERCICIO 15
 */

#include <stdio.h>

int main()
{
    int vetorS[20];
    int ultimaPosicao = 20;

    for (int i = 0; i < 20; i++)
    {
        printf("Digite o valor %d/20: ", (i + 1));
        scanf("%d", &vetorS[i]);
    }

    for (int i = 0; i < ultimaPosicao; i++)
    {
        if (vetorS[i] < 1)
        {
            for (int j = i; j < 19; j++)
            {
                vetorS[j] = vetorS[(j + 1)];
                vetorS[ultimaPosicao] = 0;
            }
            ultimaPosicao--;
            i--;
        }
    }

    for (int i = 0; i < ultimaPosicao; i++)
    {
        printf("Posição %d: %d\n", (i + 1), vetorS[i]);
    }
}
