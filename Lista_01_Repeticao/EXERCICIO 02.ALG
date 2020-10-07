Algoritmo "Exercicio 02"

// ALGORITMOS PARA ENGENHARIA II  - 2020/2
// Aluno: Alison Alain de Oliveira
// LISTA 01 - Revisão Laços
// EXERCICIO 02

Var

   valorAtual, valorAntigo, rasaoAtual, rasaoAntiga : inteiro
   i : inteiro
   resultado : caracter

Inicio

   resultado := "Verdadeiro"

   ESCREVAL("--- PROGREÇÃO  ARITIMÉTICA ---")
   ESCREVAL("-- VERIFICAÇÃO DE SEQUEICIA --")

   para i de 1 ate 9 faca
      ESCREVA("Digite o a", i, " : ")

      valorAntigo := valorAtual
      LEIA(valorAtual)

      rasaoAntiga := rasaoAtual
      rasaoAtual := (valorAtual - valorAntigo)

      SE ((rasaoAtual <> rasaoAntiga) E (resultado = "Verdadeiro") E (i > 1)) ENTAO
         resultado := "Falso"
      FIMSE

   fimpara

   ESCREVA("A sequencia de PA é: ")
   ESCREVAL(resultado)



Fimalgoritmo