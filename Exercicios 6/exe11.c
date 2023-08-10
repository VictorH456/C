//Nome: Victor Hugo Souza Costa
//Matricula: 2022010016
// 11.Crie uma enumeração representando os dias da semana. Agora, escreva um programa
// que leia um valor inteiro do teclado e exiba o dia da semana correspondente.

#include<stdio.h>
#include <conio.h>

enum Senama {Domingo = 1, Segunda, Terca, Quarta, Quinta, Sexta, Sabado}semana;

int main()
{

    printf("Digite um dia da semana: ");
    scanf("%d", &semana);

    switch (semana)
    {
    case Domingo:
        printf("O dia da semana e Domingo");
        break;
    case Segunda:
        printf("O dia da semana e Segunda");
        break;
    case Terca:
        printf("O dia da semana e Terca");
        break;
    case Quarta:
        printf("O dia da semana e Quarta");
        break;
    case Quinta:
        printf("O dia da semana e Quinta");
        break;
    case Sexta:
        printf("O dia da semana e Sexta");
        break;
    case Sabado:
        printf("O dia da semana e Sabado");
        break;
    default:
        printf("Valor digitado invalido.");
        break;
    }

    
    return 0;
}