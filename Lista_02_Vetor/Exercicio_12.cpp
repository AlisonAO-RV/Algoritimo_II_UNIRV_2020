/* 
 * ALGORITMOS PARA ENGENHARIA II  - 2020/2
 * Aluno: Alison Alain de Oliveira
 * LISTA 02 - Vetor
 * EXERCICIO 12
 */

#include <stdio.h>

int main()
{
    int nAlunos = 0;
    int gabaritoG[5];
    int repostaAluno[5];
    int notaAluno = 0;
    int acertos = 0;

    printf("Digite quantos Alunos: ");
    scanf("%d", &nAlunos);

    printf("Digite o Gabarito\n");

    for (int i = 0; i < 5; i++)
    {
        printf("Resposta %02d/05: ", (i + 1));
        scanf("%d", &gabaritoG[i]);
    }

    for (int i = 0; i < nAlunos; i++)
    {
        printf("\nDigite Resposta do Aluno %02d\n\n", (i + 1));

        for (int j = 0; j < 5; j++)
        {
            printf("Resposta %02d/05: ", (j + 1));
            scanf("%d", &repostaAluno[j]);
        }

        for (int k = 0; k < 5; k++)
        {
            if (gabaritoG[k] == repostaAluno[k])
            {
                notaAluno += 2;
                acertos++;
            }
        }

        printf("\nAluno acertou %d questões\n", acertos);
        
        if (notaAluno >= 5)
        {
            printf("Aluno Aprovado\n\n");
        }
        else
        {
            printf("Aluno Reprovado\n\n");
        }

        notaAluno = 0;
        acertos = 0;
    }
}
