/* 
 * ALGORITMOS PARA ENGENHARIA II  - 2020/2
 * Aluno: Alison Alain de Oliveira
 * LISTA 02 - Vetor
 * EXERCICIO 05
 */

#include <stdio.h>

int main()
{
    int vetorN[20];
    int auxiliar = 0;
    int contadorInverso = 20;

    for (int i = 0; i < 20; i++)
    {
        printf("Digite o valor %d/20: ", (i + 1));
        scanf("%d", &vetorN[i]);
    }

    for (int j = 0; j < 10; j++)
    {
        contadorInverso--;
        auxiliar = vetorN[j];
        vetorN[j] = vetorN[contadorInverso];
        vetorN[contadorInverso] = auxiliar;
    }

    for (int k = 0; k < 20; k++)
    {
        printf("Posição %d: %d\n", (k + 1), vetorN[k]);
    }
}
