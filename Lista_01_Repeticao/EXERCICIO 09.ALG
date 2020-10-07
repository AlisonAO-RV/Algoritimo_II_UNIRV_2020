Algoritmo "Exercicio 09"

// ALGORITMOS PARA ENGENHARIA II  - 2020/2
// Aluno: Alison Alain de Oliveira
// LISTA 01 - Revisão Laços
// EXERCICIO 09

Var

nota1Aritimetica, nota2Aritimetica : real
nota1Ponderada, nota2Ponderada, nota3Ponderada : real
peso1Ponderada, peso2Ponderada, peso3Ponderada : real
pondera, peso : real
loop, opcao : inteiro;

Inicio

      loop := 0
      
     ENQUANTO ( loop = 0) FACA
         ESCREVAL("---- MENU ----")
         ESCREVAL("1. MÉDIA ARITMÉTICA")
         ESCREVAL("2. MÉDIA PONDERADA")
         ESCREVAL("3. SAIR")
         ESCREVA("DIGITE A OPÇÃO DESEJADA: ")
         LEIA(opcao)
         
         ESCOLHA (OPCAO)

                 CASO 1
                      ESCREVA("Digite a 1° Nota: ")
                      LEIA (nota1Aritimetica)
                      ESCREVA("Digite a 2° Nota: ")
                      LEIA (nota2Aritimetica)
                      ESCREVAL(" ")
                      ESCREVAL("Média Aritimética: ",((nota1Aritimetica + nota2Aritimetica) / 2))
                      
                 CASO 2
                      ESCREVA("Digite a 1° Nota: ")
                      LEIA (nota1Ponderada)
                      ESCREVA("Digite o 1° peso: ")
                      LEIA (peso1Ponderada)

                      ESCREVA("Digite a 2° Nota: ")
                      LEIA (nota2Ponderada)
                      ESCREVA("Digite o 2° peso: ")
                      LEIA (peso2Ponderada)

                      ESCREVA("Digite a 3° Nota: ")
                      LEIA (nota3Ponderada)
                      ESCREVA("Digite o 3° peso: ")
                      LEIA (peso3Ponderada)
                      
                      pondera := ((nota1Ponderada * peso1Ponderada) + (nota2Ponderada * peso2Ponderada) + (nota3Ponderada * peso3Ponderada))
                                
                      peso := peso1Ponderada + peso2Ponderada + peso3Ponderada;
                      
                      ESCREVAL(" ")
                      ESCREVAL("Média Ponderada: ", (pondera / peso))
                      
                 CASO 3
                      loop := -1
                      
                 OUTROCASO
                          ESCREVAL("Comando Invalido")
                          
         FIMESCOLHA
         
         ESCREVAL(" ")
         
     FIMENQUANTO

Fimalgoritmo