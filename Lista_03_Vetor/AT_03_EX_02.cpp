/* 
 * ALGORITMOS PARA ENGENHARIA II  - 2020/2
 * Aluno: Alison Alain de Oliveira
 * Atividade 3 - Vetor
 * EXERCICIO 02
 */

#include <stdio.h>

int main()
{
    int vetorNum[10];
    int vetorDiv[5];
    int contador = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Digite um Numero Inteiro - %d/10: ", (i + 1));
        scanf("%d", &vetorNum[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("Digite um Numero Inteiro - %d/5: ", (i + 1));
        scanf("%d", &vetorDiv[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("Numero %d\n", vetorNum[i]);

        for (int j = 0; j < 5; j++)
        {
            if ((vetorNum[i] % vetorDiv[j]) == 0)
            {
                printf("Divisível por %d na posição %d\n", vetorDiv[j], (j + 1));
                contador++;
            }
        }

        if (contador == 0)
        {
            printf("Não possue divisores no segundo vetor\n");
        }

        printf("\n");

        contador = 0;
    }
}
