/* 
 * ALGORITMOS PARA ENGENHARIA II  - 2020/2
 * Aluno: Alison Alain de Oliveira
 * LISTA 02 - Vetor
 * EXERCICIO 04
 */

#include <stdio.h>

int main()
{
    int vetorC[50];
    int maiorValor = 0;
    int posicaoMaiorValor = 0;

    for (int i = 0; i < 50; i++)
    {
        printf("Digite o valor %d/50: ", (i + 1));
        scanf("%d", &vetorC[i]);

        if (vetorC[i] > maiorValor)
        {
            maiorValor = vetorC[i];
            posicaoMaiorValor = i + 1;
        }
    }

    printf("\nO mair valor digitado é %d e esta na posição %d.\n", maiorValor, posicaoMaiorValor);
}
