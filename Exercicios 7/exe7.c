//Nome: Victor Hugo Souza Costa
//Matricula: 2022010016
/* 7.Elabore uma função que receba três números inteiros como parâmetro, representando
horas, minutos e segundos. A função deve retornar esse horário convertido em
segundos.*/

#include<stdio.h>

int Conversor(int h, int m, int s)
{
    return s + h * 3600 + m * 60;
}

int main()
{
    int horas,minutos,segundos, res;
    scanf("%d %d %d", &horas, &minutos, &segundos);

    res = Conversor(horas, minutos, segundos);

    printf("O valor em segundos e: %d",res);

    return 0;
}