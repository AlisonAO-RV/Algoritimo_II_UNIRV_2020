/* 
 * ALGORITMOS PARA ENGENHARIA II  - 2020/2
 * Aluno: Alison Alain de Oliveira
 * LISTA 02 - Vetor
 * EXERCICIO 09
 */

#include <stdio.h>

int main()
{
    int vetorF[20];
    int base = 0;
    int vetorG[20];

    printf("Digite a base: ");
    scanf("%d", &base);

    for (int i = 0; i < 20; i++)
    {
        printf("Digite a valor %d/20: ", (i + 1));
        scanf("%d", &vetorF[i]);
        vetorG[i] = vetorF[i] * base;
    }

    printf("|%-5s| %s |%-5s|%-5s|\n", "  F", "X", "Base", "  G");

    for (int i = 0; i < 20; i++)
    {
        printf("| %03d | %s | %03d | %03d |\n", vetorF[i], "X", base, vetorG[i]);
    }
}
