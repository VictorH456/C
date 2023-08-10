//Nome: Victor Hugo Souza Costa
//Matricula: 2022010016
// 3.Faça um programa que leia cinco valores e os armazene em um vetor. Em seguida,
//mostre todos os valores lidos juntamente com a média dos valores.

#include<stdio.h>

int main()
{
    int valores[6];
    double media;

    printf("Digite 6 valores inteiros: ");

    for (int i = 0; i < 6; i++)
    {
        scanf("%d",&valores[i]);
        media += valores[i];
    }
    
    printf("Os valores lidos foram: ");
    
    for (int i = 0; i < 6; i++)
    {
        printf("%d ",valores[i]);
    }
    printf("e a media: %.2lf",media/6);

    return 0;
}