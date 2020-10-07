Algoritmo "Exercicio 06"

// ALGORITMOS PARA ENGENHARIA II  - 2020/2
// Aluno: Alison Alain de Oliveira
// LISTA 01 - Revisão Laços
// EXERCICIO 06

Var

valor01, valor02, valor03, loop : inteiro

Inicio

      loop := 0
      
      ESCREVAL("VERIFICAÇÃO DE VALORES")
      ESCREVAL("-------------------------------")
      
      ENQUANTO ( loop > -1 ) FACA

      ESCREVA("Digite o Valor 01: ")
      LEIA(valor01)

      ESCREVA("Digite o Valor 02: ")
      LEIA(valor02)
      
      ESCREVA("Digite o Valor 03: ")
      LEIA(valor03)
      
      SE (( valor01 < valor02) E ( valor02 < valor03 )) ENTAO
         ESCREVAL("Soma: ", (valor01 + valor02 + valor03))
         ESCREVAL("Produto: ", (valor01 * valor02 * valor03))
         ESCREVAL("Média: ", (valor01 + valor02 + valor03) / 3)
         ESCREVAL("-------------------------------")
      SENAO
         loop := -1
      FIMSE
      
      FIMENQUANTO

      
Fimalgoritmo