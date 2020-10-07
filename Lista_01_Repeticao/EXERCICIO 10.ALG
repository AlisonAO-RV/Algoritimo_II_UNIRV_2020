Algoritmo "Exercicio 10"

// ALGORITMOS PARA ENGENHARIA II  - 2020/2
// Aluno: Alison Alain de Oliveira
// LISTA 01 - Revisão Laços
// EXERCICIO 10

Var

valorDigitado, valorMaior, valorMenor, loop : inteiro

Inicio

      valorMaior := 0
      valorMenor := 0
      loop := 0
      
      ENQUANTO (loop > -1) FACA
      
               ESCREVA("Digite um Valor Inteiro e Positivo: ")
               LEIA(valorDigitado)
               
               SE (valorDigitado = 0) ENTAO
                  loop := -1
               SENAO
               
                    SE (valorDigitado < 0) ENTAO
                       ESCREVAL("Valor Digitado Invalido")
                    SENAO
                    
                         SE (valorDigitado > valorMaior) ENTAO
                            valorMaior := valorDigitado
                         FIMSE
                         
                         SE ((valorDigitado < valorMenor) ou (valorMenor = 0)) ENTAO
                            valorMenor := valorDigitado
                         FIMSE
                         
                    FIMSE
                    
               FIMSE
               
      FIMENQUANTO
      
      ESCREVAL("Valor Maior: ", valorMaior)
      ESCREVAL("Valor Menor: ", valorMenor)


Fimalgoritmo