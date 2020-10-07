Algoritmo "Exercicio 03"

// ALGORITMOS PARA ENGENHARIA II  - 2020/2
// Aluno: Alison Alain de Oliveira
// LISTA 01 - Revisão Laços
// EXERCICIO 03

Var

resultado0a25, resultado26a50, resultado51a75, resultado76a100 : inteiro
valor : inteiro

Inicio

      ENQUANTO valor > -1 FACA
      
         ESCREVA("Digite um Numero entre 0 e 100: ")
         LEIA(valor)

         SE ((valor > -1) E (valor <26)) ENTAO
            resultado0a25 := resultado0a25 + 1
         SENAO
              SE ((valor > 25) E (valor <51)) ENTAO
                 resultado26a50 := resultado26a50 + 1
              SENAO
                  SE ((valor > 50) E (valor <76)) ENTAO
                     resultado51a75 := resultado51a75 + 1
                  SENAO
                       SE ((valor > 75) E (valor <101)) ENTAO
                          resultado76a100 := resultado76a100 + 1
                       SENAO
                            SE (valor > 100) ENTAO
                               ESCREVAL("Número Invalido")
                            SENAO
                               ESCREVAL("Mostrando Resultado")
                            FIMSE
                       FIMSE
                  FIMSE
              FIMSE
         FIMSE
      FIMENQUANTO
      
      ESCREVAL("Resultado de  0 a  25: ", resultado0a25)
      ESCREVAL("Resultado de 26 a  50: ", resultado26a50)
      ESCREVAL("Resultado de 51 a  75: ", resultado51a75)
      ESCREVAL("Resultado de 76 a 100: ", resultado76a100)
      
Fimalgoritmo