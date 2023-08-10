//Nome: Victor Hugo Souza Costa
//Matricula: 2022010016
// 7.Crie uma estrutura representando uma hora. Essa estrutura deve conter os campos
//hora, minuto e segundo. Agora, escreva um programa que leia um vetor de cinco
//posições dessa estrutura e imprima a maior hora.

#include <stdio.h>

struct Horas
{
    int hora, minutos, segundos, comparar;
};

int main()
{
    int coverter, hora, minuto, segundo;
    struct Horas horas[5];

    printf("Digite as horas (hora:minuto:segundo):\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d:%d:%d", &horas[i].hora, &horas[i].minutos, &horas[i].segundos);
        horas[i].comparar = horas[i].hora * 3600 + horas[i].minutos * 60 + horas[i].segundos; //transforma tudo em segundos para comparar

        if (i == 0 || horas[i].comparar > coverter)
        {
            coverter = horas[i].comparar;
        }
    }

    //transforma para a contagem de horas e minutos certa.
    hora = coverter / 3600;
    minuto = (coverter % 3600) / 60;
    segundo = coverter % 60;

    printf("A maior hora foi: %02d:%02d:%02d\n", hora, minuto, segundo);
}