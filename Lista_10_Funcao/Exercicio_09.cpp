/* 
 * ALGORITMOS PARA ENGENHARIA II  - 2020/2
 * Aluno: Alison Alain de Oliveira
 * Ordenação
 * EXERCICIO 09 - funcao
 */

#include <bits/stdc++.h>
using namespace std;

void FunPesquisa()
{
    bool loop = true;
    int contador = 0;

    double salarioDigitado = 0;
    int filhosDigitados = 0;

    double somaSalario = 0;
    int somaFilhos = 0;

    double maiorSalario = 0;
    int contSalarioBase = 0;

    while (loop)
    {
        printf("Digite o Salario do habitante %d: ", contador + 1);
        cin >> salarioDigitado;

        if (salarioDigitado == 0)
        {
            loop = false;
        }
        else
        {
            printf("Digite quantos dilhos o habitante %d tem: ", contador + 1);
            cin >> filhosDigitados;
            printf("\n");
            somaSalario += salarioDigitado;
            somaFilhos += filhosDigitados;

            if (maiorSalario < salarioDigitado)
            {
                maiorSalario = salarioDigitado;
            }

            if (salarioDigitado <= 1350)
            {
                contSalarioBase++;
            }
            contador++;
        }
    }

    printf("A média de salario é %.2f\n", (somaSalario / contador));
    printf("A média de Filhos é %d\n", (somaFilhos / contador));
    printf("O maior salario é %.2f\n", maiorSalario);
    printf("A porcentagem de salario até 1.350,00 é %.2f%%\n", ((100.0 / contador) * contSalarioBase));

}

int main()
{
    FunPesquisa();
}
