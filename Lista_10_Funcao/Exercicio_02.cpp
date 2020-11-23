/* 
 * ALGORITMOS PARA ENGENHARIA II  - 2020/2
 * Aluno: Alison Alain de Oliveira
 * Ordenação
 * EXERCICIO 02 - funcao
 */

#include <bits/stdc++.h>
using namespace std;

/* LEGENDA DO VETOR
 * [0] SEXO: [0] FEMININO | [1] MASCULINO
 * [1] COR DOS OLHOS: [0] AZUIS | [1] VERDES | [2] CASTANHOS
 * [2] COR DOS CABELOS: [0] LOUROS | [1] PRETOS | [2] CASTANHOS
 * [3] IDADE: MAIOR OU IGUAL A 0
 */

int pesquisa[50][4];

int FunSexo() {
    int sexo = 0;
    cout << "Escolha o sexo\n   [0] Masculino [1] Feminino: ";
    // cin >> sexo;
    sexo = (rand() % 2);
    return sexo;
}

int FunCorDosOlhos() {
    int cor = 0;
    cout << "Escolha a cor dos olhos\n   [0] AZUIS | [1] VERDES | [2] CASTANHOS: ";
    // cin >> cor;
    cor = (rand() % 3);
    return cor;
}

int FunCorDosCabelos() {
    int cor = 0;
    cout << "Escolha a cor dos cabelos\n   [0] LOUROS | [1] PRETOS | [2] CASTANHOS: ";
    // cin >> cor;
    cor = (rand() % 3);
    return cor;
}

int FunIdade() {
    int idade = 0;
    cout << "Digite a idade: ";
    // cin >> idade;
    idade = (rand() % 105);
    return idade;
}

void FumPrint(int registro[50][4]) {
    for (int i = 0; i < 50; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("| %3d ", registro[i][j]);
        }
        cout << "| \n";
    }   
}

void FunRegistro(int registro[50][4]) {
    for (int i = 0; i < 50; i++)
    {
        cout << "INFORMAÇÕES DO HABITANTE: " << (i + 1) << "\n";
        registro[i][0] = FunSexo();
        cout << "\n";
        registro[i][1] = FunCorDosOlhos();
        cout << "\n";
        registro[i][2] = FunCorDosCabelos();
        cout << "\n";
        registro[i][3] = FunIdade();
        cout << "\n\n";
    }
}

int FunMaiorIdade(int registro[50][4]) {
    int maiorIdade = 0;
    for (int i = 0; i < 50; i++)
    {
        if (registro[i][3] >= maiorIdade)
        {
            maiorIdade = registro[i][3];
        }
    }
    return maiorIdade;
}

int FunQuantidade(int registro[50][4]) {
    int quant = 0;
    for (int i = 0; i < 50; i++)
    {
        if (registro[i][0] == 0)
        {
            if (registro[i][3] > 17 && registro[i][3] < 36)
            {
                if (registro[i][1] == 1 && registro[i][2] == 0)
                {
                    quant++;
                }
            }
        }
    }
    return quant;
}

int main()
{
    int maiorIdade = 0;
    int quantidade = 0;

    srand((int)time(0));

    FunRegistro(pesquisa);

    // FumPrint(pesquisa);

    maiorIdade =  FunMaiorIdade(pesquisa);
    printf("A Maior idade é: %d\n", maiorIdade);

    quantidade = FunQuantidade(pesquisa);
    printf("A Quantidade de Habitantes com as Caracteristicas solicitadas é de %d\n", quantidade);
}
