/* 
 * ALGORITMOS PARA ENGENHARIA II  - 2020/2
 * Aluno: Alison Alain de Oliveira
 * Atividade 3 - Vetor
 * EXERCICIO 03
 */

#include <stdio.h>

int main()
{
    int contador = 100;
    int contadorPrimos = 0;
    int contadorVetor = 0;
    int vetorPrimos[10];

    while (contadorVetor < 10)
    {
        contador++;

        for (int i = 2; (i < contador) && (contadorPrimos == 0); i++)
        {
            if (contador % i == 0)
            {
                contadorPrimos++;
            }
        }

        if (contadorPrimos == 0)
        {
            vetorPrimos[contadorVetor] = contador;
            contadorVetor++;
        }

        contadorPrimos = 0;
    }

    printf("| 10 NÚMEROS PRIMOS ACIMA DE 100\n");
    for (int i = 0; i < 10; i++)
    {
        printf("| %d ", vetorPrimos[i]);
    }
    printf("|\n");
}
