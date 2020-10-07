/* 
 * ALGORITMOS PARA ENGENHARIA II  - 2020/2
 * Aluno: Alison Alain de Oliveira
 * Atividade 3 - Vetor
 * EXERCICIO 04
 */

#include <stdio.h>

int main()
{
    int vetorX[10];
    int vetorY[10];
    int Verificador = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Digite o valor %d/10 de X: ", (i + 1));
        scanf("%d", &vetorX[i]);
    }

    printf("\n");

    for (int i = 0; i < 10; i++)
    {
        printf("Digite o valor %d/10 de Y: ", (i + 1));
        scanf("%d", &vetorY[i]);
    }

    printf("\n");

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (vetorX[i] == vetorY[j])
            {
                Verificador = 1;
            }
        }

        if (Verificador == 0)
        {
            printf("| %d ", vetorX[i]);
        }

        Verificador = 0;
    }
}
