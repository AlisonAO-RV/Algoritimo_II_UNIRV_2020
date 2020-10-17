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
    int vetor[55] = {
        111, 999, 222, 999, 333, 888, 444, 777, 555, 666, 555,
        89, 79, 32, 38, 46, 26, 43, 48, 33, 179, 24,
        56, 62, 74, 87, 98, 101, 112, 115, 135, 148, 159,
        53, 68, 84, 92, 104, 116, 128, 139, 145, 151, 47,
        302, 286, 254, 231, 209, 193, 182, 174, 155, 122, 84};

    int auxiliar = 0;
    int menor = 0;
    int cont = 0;

    printf("Vetor Original\n");
    for (int i = 0; i < 55; i++)
    {
        printf("| %3d ", vetor[i]);
        cont++;
        if (cont == 11)
        {
            printf("|\n");
            cont = 0;
        }
        }
    printf("|\n");

    for (int i = 0; i < 54; i++)
    {
        menor = i;
        for (int j = i + 1; j < 55; j++)
        {
            if (vetor[j] < vetor[menor])
            {
                menor = j;
            }
        }
        auxiliar = vetor[menor];
        vetor[menor] = vetor[i];
        vetor[i] = auxiliar;
    }

    printf("Vetor Ordenado\n");
    for (int i = 0; i < 55; i++)
    {
        printf("| %3d ", vetor[i]);
        cont++;
        if (cont == 11)
        {
            printf("|\n");
            cont = 0;
        }
    }
    printf("|\n");
}
