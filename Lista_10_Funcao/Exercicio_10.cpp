/* 
 * ALGORITMOS PARA ENGENHARIA II  - 2020/2
 * Aluno: Alison Alain de Oliveira
 * Ordenação
 * EXERCICIO 10 - funcao
 */

#include <bits/stdc++.h>
using namespace std;

void FunTriangulo()
{
    int X, Y, Z = 0;
    cout << "Digite os valores X Y Z: ";
    cin >> X >> Y >> Z;
    if ((X < (Y + Z)) && (Y < (Z + X)) && (Z < (X + Y)))
    {
        if ((X == Y) && (X == Z))
        {
            cout << "Triangulo Equilátero\n";
        }
        else if (((X == Y) && (Y != Z)) || ((Y == Z) && (Z != X)) || ((Z == X) && (X != Y)))
        {
            cout << "Triangulo Isósceles\n";
        }
        else if ((X != Y) && (Y != Z) && (Z != X))
        {
            cout << "Triangulo Escaleno\n";
        }
    }
    else
    {
        cout << "Não é um Triangulo\n";
    }
}

int main()
{
    FunTriangulo();
}
