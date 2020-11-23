/* 
 * ALGORITMOS PARA ENGENHARIA II  - 2020/2
 * Aluno: Alison Alain de Oliveira
 * Ordenação
 * EXERCICIO 06 - funcao
 */

#include <bits/stdc++.h>
using namespace std;

double FunS()
{
    int valor = 0;
    double resultado = 1.0;
    cout << "Digite um valor: ";
    cin >> valor;
    for (int i = 2; i <= valor; i++)
    {
        resultado += 1.0 / i;
    }
    return resultado;
}

int main()
{
    double resposta = 0;

    resposta = FunS();

    printf("Valor de S é %.2f\n", resposta);
}
