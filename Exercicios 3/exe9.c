/* Nome: Victor Hugo Souza Costa 
Matricula: 2022010016

9.Faça um programa que leia a altura e o peso de uma pessoa. De acordo com a
tabela a seguir, verifique e mostre qual a classificação dessa pessoa.*/

#include<stdio.h>

int main(void)
{
    //Definindo as variaveis.
    float altura,peso;

    printf("Digite sua altura seguido pelo peso: ");
    scanf("%f %f",&altura,&peso); //Entrada dos valores.

    if (peso<60) //Condições.
    {
        if (altura<1.20)
        {
            printf("A");
        }
        else if (altura>=1.20 && altura<=1.70)
        {
            printf("B");
        }
        else
        {
            printf("C");
        }
        
    }
    else if (peso>=60 && peso<=90)
    {
        if (altura<1.20)
        {
            printf("D");
        }
        else if (altura>=1.20 && altura<=1.70)
        {
            printf("E");
        }
        else
        {
            printf("F");
        }
    }
    else if (peso>90)
    {
        if (altura<1.20)
        {
            printf("G");
        }
        else if (altura>=1.20 && altura<=1.70)
        {
            printf("H");
        }
        else
        {
            printf("I");
        }
    }
    return 0;
}