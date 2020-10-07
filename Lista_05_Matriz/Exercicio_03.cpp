/* 
 * ALGORITMOS PARA ENGENHARIA II  - 2020/2
 * Aluno: Alison Alain de Oliveira
 * Matrizes Lista 2
 * EXERCICIO 03
 */

#include <stdio.h>
#include <cstdlib>
#include <ctime>

int main()
{
    int matrizA[15][5];
    int matrizAux[2][75];
    int contAux = 1;
    bool verifica = true;
    int repet = 0;

    srand((int)time(0));

    printf("\n\n| MATRIZ A\n\n");
    for (int i = 0; i < 15; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            matrizA[i][j] = (rand() % 10) + 1;
            printf("| %2d ", matrizA[i][j]);
        }
        printf("|\n");
    }

    printf("\n\n| RESPOSTA \n\n");

    matrizAux[0][0] = matrizA[0][0];

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 15; j++)
        {
            for (int k = 0; k < contAux; k++)
            {

                if (matrizAux[0][k] == matrizA[i][j])
                {
                    verifica = false;
                }
            }

            if (verifica == true)
            {
                matrizAux[0][contAux] = matrizA[i][j];
                contAux++;
            }

            verifica = true;
        }
    }

    for (int i = 0; i < contAux; i++)
    {
        for (int j = 0; j < 15; j++)
        {
            for (int k = 0; k < 5; k++)
            {
                if (matrizAux[0][i] == matrizA[j][k])
                {
                    repet++;
                }
            }

            matrizAux[1][i] = repet;
        }
        repet = 0;
    }

    printf("| Numero | Quant  |\n");
    for (int i = 0; i < contAux; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("|   %2d   ", matrizAux[j][i]);
        }
        printf("|\n");
    }
}
