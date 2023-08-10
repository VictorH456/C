//Nome: Victor Hugo Souza Costa
//Matricula: 2022010016
// 12.Escreva um programa que contenha uma estrutura representando uma data válida.
// Essa estrutura deve conter os campos dia, mês e ano. Em seguida, leia duas datas e
// armazene nessa estrutura. Calcule e exiba o número de dias que decorreram entre as
// duas datas.


//Considerei todos os meses com 30 dias para facilitar os calculos.
#include<stdio.h>

typedef struct Data
{
    int dia, mes, ano;
}Data;

Data data[2];

int main()
{
    int qtd_dia;

    printf("Digite a data(ex:dd/mm/aaaa): ");
    for (int i = 0; i < 2; i++)
    {
        scanf("%d/%d/%d",&data[i].dia, &data[i].mes, &data[i].ano);
    }
    
    if (data[0].ano > data[1].ano)
    {
        qtd_dia = (data[0].dia - data[1].dia) + 30*(data[0].mes - data[1].mes) + 365*(data[0].ano - data[1].ano);
    }
    else
    {
        qtd_dia = (data[1].dia - data[0].dia) + 30*(data[1].mes - data[0].mes) + 365*(data[1].ano - data[0].ano);
    }
    
    printf("A quantidade de dias: %d",qtd_dia);
    return 0;
}