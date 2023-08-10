//Nome: Victor Hugo Souza Costa
//Matricula: 2022010016
/* 15.Faça uma função que receba um inteiro N como parâmetro. Calcule e retorne o
resultado da seguinte série  s: S= 2/4+5/5+...+(n^2+1/n+3)*/

#include<stdio.h>

void serie(int num)
{
    double soma = 0;

    for (int i = 1; i < num+1; i++)
    {
        soma += (double)(i*i+1)/(i+3);
    }

    printf("A soma do numero e: %.2lf",soma);

}

int main()
{
    int num;

    printf("Digite um numero inteiro: ");
    scanf("%d",&num);

    serie(num);

    return 0;
}