/* 
 * ALGORITMOS PARA ENGENHARIA II  - 2020/2
 * Aluno: Alison Alain de Oliveira
 * Atividade 3 - Vetor
 * EXERCICIO 01
 */

#include <stdio.h>

int main()
{

    float ValorProdutos[10];
    int quantidadeVendida[10];
    float totalProduto = 0;
    float totalVenda = 0;
    float salarioFuncionario = 545.00;
    float porcentagem = 5;
    float comicao = 0;

    printf("\n\n\nCONTROLE DE VENDAS\n\n\n");

    for (int i = 0; i < 10; i++)
    {
        printf("Digite a Quantidade do item %02d: ", (i + 1));
        scanf("%d", &quantidadeVendida[i]);
        printf("Digite o Valor Unitário do item %02d: ", (i + 1));
        scanf("%f", &ValorProdutos[i]);
        printf("\n");
    }

    for (int i = 0; i < 10; i++)
    {
        totalProduto = quantidadeVendida[i] * ValorProdutos[i];
        totalVenda += totalProduto;
        printf("Produto %02d: Valor Unit: %.2f  -  Quant. Vendida: %d  - Total: %.2f\n", (i + 1), ValorProdutos[i], quantidadeVendida[i], totalProduto);
    }

    printf("\nTotal de Todas as Vendas: %.2f\n", totalVenda);
    comicao = ((totalVenda / 100) * porcentagem);
    printf("\nTotal de Comição: %.2f\n", comicao);
    printf("\nTotal que o Funcionario Recebera: %.2f\n", salarioFuncionario + comicao);
}
