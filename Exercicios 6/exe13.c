//Nome: Victor Hugo Souza Costa
//Matricula: 2022010016
// 13.Crie uma enumeração representando os meses do ano. Agora, escreva um programa
// que leia um valor inteiro do teclado e exiba o nome do mês correspondente e quantos
// dias ele possui.

#include<stdio.h>

enum Meses{Janeiro = 1, Fevereiro, Marco, Abril, Maio, Junho, Julho, Agosto, Setembro, Outubro, Novembro, Dezembro};

int main()
{
    int mes; 
    int dias[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    printf("Digite Um valor inteiro de 1 a 12 ");
    scanf("%d",&mes);

    switch (mes)
        {
        case Janeiro:
            printf("Janeiro e possui %d dias.\n", dias[mes]);
            break;
        case Fevereiro:
            printf("Fevereiro e possui %d dias.\n", dias[mes]);
            break;
        case Marco:
            printf("Marco e possui %d dias.\n", dias[mes]);
            break;
        case Abril:
            printf("Abril e possui %d dias.\n", dias[mes]);
            break;
        case Maio:
            printf("Maio e possui %d dias.\n", dias[mes]);
            break;
        case Junho:
            printf("Junho e possui %d dias.\n", dias[mes]);
            break;
        case Julho:
            printf("Julho e possui %d dias.\n", dias[mes]);
            break;
        case Agosto:
            printf("Agosto e possui %d dias.\n", dias[mes]);
            break;
        case Setembro:
            printf("Setembro e possui %d dias.\n", dias[mes]);
            break;
        case Outubro:
            printf("Outubro e possui %d dias.\n", dias[mes]);
            break;
        case Novembro:
            printf("Novembro e possui %d dias.\n", dias[mes]);
            break;
        case Dezembro:
            printf("Dezembro e possui %d dias.\n", dias[mes]);
            break;
        default:
            printf("Voce digitou um valor invalido");
            break;
        }
    return 0;
}