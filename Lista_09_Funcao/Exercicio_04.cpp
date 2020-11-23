/* 
 * ALGORITMOS PARA ENGENHARIA II  - 2020/2
 * Aluno: Alison Alain de Oliveira
 * Ordenação
 * EXERCICIO 04 - funcao
 */

#include <stdio.h>
#include <stdlib.h>

void FunSomar(double A, double B)
{
    printf("\033[0;33mSOMA\033[0m - Resultado:\033[0;33m %.2f\033[0m", (A + B));
}

void FunSubtrair(double A, double B)
{
    printf("\033[0;33mSubtração\033[0m - Resultado:\033[0;33m %.2f\033[0m", (A - B));
}

void FunMultiplicar(double A, double B)
{
    printf("\033[0;33mMultiplicação\033[0m - Resultado:\033[0;33m %.2f\033[0m", (A * B));
}

void FunDividir(double A, double B)
{
    if (B == 0)
    {
        printf("\033[0;33mNão é possivel dividir por 0\033[0m");
    }
    else
    {
        printf("\033[0;33mDivisão\033[0m - Resultado:\033[0;33m %.2f\033[0m", (A / B));
    }
}

void PrintMenu()
{
    printf("\n\n");
    printf(" - MENU CALCULADORA -\n");
    printf("|\033[0;33m 1 \033[0m| SOMAR        |\n");
    printf("|\033[0;33m 2 \033[0m| SUBTRAIR     |\n");
    printf("|\033[0;33m 3 \033[0m| MULTIPLICAR  |\n");
    printf("|\033[0;33m 4 \033[0m| DIVIDIR      |\n");
}

int funOperacao()
{
    int op = 0;
    printf("Digite qual Operação vc deseja: ");
    scanf("%d", &op);
    if (op < 1 || op > 4)
    {
        op = -1;
    }
    return op;
}

double funRecebeValor(char L)
{
    double valor = 0;
    printf("Digite o valor de %c: ", L);
    scanf("%lf", &valor);
    return valor;
}

void FunCalculadora()
{
    double A = 0;
    double B = 0;
    int OP = 0;
    char sair = 'y';

    do
    {
        PrintMenu();
        printf("\n");

        OP = funOperacao();
        printf("\n");

        if (OP != -1)
        {
            A = funRecebeValor('A');
            printf("\n");
            B = funRecebeValor('B');
            printf("\n");
        }

        switch (OP)
        {
        case 1:
            FunSomar(A, B);
            break;

        case 2:
            FunSubtrair(A, B);
            break;

        case 3:
            FunMultiplicar(A, B);
            break;

        case 4:
            FunDividir(A, B);
            break;

        default:
            printf("Operação Invalida.\n");
            break;
        }

        printf("\n\nDeseja Fazer novo Calculao [y] [n]: ");
        scanf("%s", &sair);

    } while (sair == 'y');
}

int main()
{
    FunCalculadora();
}
