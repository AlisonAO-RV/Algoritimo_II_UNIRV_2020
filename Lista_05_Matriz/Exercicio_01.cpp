/* 
 * ALGORITMOS PARA ENGENHARIA II  - 2020/2
 * Aluno: Alison Alain de Oliveira
 * Matrizes Lista 2
 * EXERCICIO 01
 */

#include <stdio.h>
#include <cstdlib>
#include <ctime>

int main()
{

    float matrizAlunos[10][3];
    float menorNota = 0;
    int nunAluno = 0;
    int contProva1 = 0;
    int contProva2 = 0;
    int contProva3 = 0;

    srand((int)time(0));

    printf("|  ALUNOS  | PROVA 01 | PROVA 02 | PROVA 03 |\n");
    for (int i = 0; i < 10; i++)
    {
        printf("| Aluno %2d ", i + 1);
        for (int j = 0; j < 3; j++)
        {
            matrizAlunos[i][j] = (rand()) / (static_cast<float>(RAND_MAX / 10));
            printf("|   %.2f   ", matrizAlunos[i][j]);
        }
        printf("|\n");
    }

    printf("\n|-RELATÓRIO MENOR NOTA -------->\n\n");

    for (int i = 0; i < 10; i++)
    {
        menorNota = matrizAlunos[i][0];
        nunAluno = 0;

        for (int j = 0; j < 3; j++)
        {
            if (menorNota >= matrizAlunos[i][j])
            {
                menorNota = matrizAlunos[i][j];
                nunAluno = j;
            }
        }

        switch (nunAluno)
        {
        case 0:
            contProva1++;
            break;
        case 1:
            contProva2++;
            break;
        case 2:
            contProva3++;
            break;
        }

        printf("|-- Aluno %2d Menor nota: %.2f \n", i + 1, menorNota);
    }

    printf("\n|-RELATÓRIO MENOR PROVA ------->\n\n");

    printf("|-- %d Alunos tiveram as menores nota na PROVA 01\n", contProva1);
    printf("|-- %d Alunos tiveram as menores nota na PROVA 02\n", contProva2);
    printf("|-- %d Alunos tiveram as menores nota na PROVA 03\n", contProva3);

    printf("\n");

}
