/* 
 * ALGORITMOS PARA ENGENHARIA II  - 2020/2
 * Aluno: Alison Alain de Oliveira
 * LISTA 02 - Vetor
 * EXERCICIO 08
 */

#include <stdio.h>

int main()
{
    int vetorS[20];
    int base = 0;
    int somaProduto = 0;

    printf("Digite valor da base: ");
    scanf("%d", &base);

    for (int i = 0; i < 20; i++)
    {
        printf("Digite o valor %d/20: ", (i + 1));
        scanf("%d", &vetorS[i]);
        somaProduto += vetorS[i] * base;
    }

    printf("A soma dos produtos é: %d\n", somaProduto);
}
