Algoritmo "Exercicio 07"

// ALGORITMOS PARA ENGENHARIA II  - 2020/2
// Aluno: Alison Alain de Oliveira
// LISTA 01 - Revisão Laços
// EXERCICIO 07

Var

valorDivida, valorDividaComJuro, valorDoJuro, valorDaParcela : real
porcentagemDoJuro, i, parcelas : inteiro

Inicio

      ESCREVA("Informe o Valor da Divida: R$")
      LEIA(valorDivida)
      
      ESCREVAL("| V. Divida | V. Juros | Q. Parcelas | V. Parcela |")
      ESCREVAL("| ",valorDivida," |  0   |  1 X |" ,valorDivida)
      
      porcentagemDoJuro := 5;
      parcelas := 0;
      PARA i DE 1 ATE 4 FACA
      
           porcentagemDoJuro := porcentagemDoJuro + 5;
           parcelas := parcelas + 3;
           
           valorDoJuro := ((valorDivida / 100) * porcentagemDoJuro);
           valorDividaComJuro := (valorDivida + valorDoJuro);
           valorDaParcela := (valorDividaComJuro / parcelas);

           ESCREVAL("| ",valorDividaComJuro," | ", valorDoJuro," | ",parcelas," X |" ,valorDaParcela:6:2, " |")
      
      FIMPARA

Fimalgoritmo