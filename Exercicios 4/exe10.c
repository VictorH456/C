//Nome: Victor Hugo Souza Costa 
//Matricula: 2022010016
//Faça um programa que leia 10 inteiros positivos, ignorando não positivos, e imprima sua média.

#include<stdio.h>

int main()
{
    double verifica, media,qtd = 0;
    for (int i = 0; i < 10; i++)
    {
        
        scanf("%lf",&verifica);
        fflush(stdin);
        if (verifica>0)
        {
            media += verifica;
            qtd++;
        }}
    
    printf("media %.0lf",media/qtd);
}