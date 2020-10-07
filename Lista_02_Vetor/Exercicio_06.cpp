/* 
 * ALGORITMOS PARA ENGENHARIA II  - 2020/2
 * Aluno: Alison Alain de Oliveira
 * LISTA 02 - Vetor
 * EXERCICIO 06
 */

#include <stdio.h>

int main()
{
    int vetorK[30];
    int auxiliarImpar = 0;
    int auxiliarPar = 0;
    int posicao = 0;
    bool impar = false;

    for (int i = 0; i < 30; i++)
    {
        printf("Digite a valor %d/30: ", (i + 1));
        scanf("%d", &vetorK[i]);
    }

    for (int j = 0; j < 30; j++)
    {
        if ((vetorK[j] % 2) == 1)
        {
            auxiliarImpar = vetorK[j];
            posicao = j;
            impar = true;
        }

        if ((vetorK[j] % 2) == 0 && impar == true)
        {
            auxiliarPar = vetorK[j];
            vetorK[posicao] = auxiliarPar;
            vetorK[j] = auxiliarImpar;
            impar = false;
        }
    }

    for (int k = 0; k < 30; k++)
    {
        printf("Posição %d: %d\n", (k + 1), vetorK[k]);
    }
}
