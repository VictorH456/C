//Nome: Victor Hugo Souza Costa
//Matricula: 2022010016
/* 15.Escreva uma função que receba um número inteiro positivo n. Calcule e retorne o seu
fatorial n!: n! = n * ( – 1) * (n – 2) * ... * 1.*/

#include<stdio.h>

void fat(int num)
{
    int res = 1;
    for (int i = 1; i <= num; i++)
    {
       res *= i;
    }
    printf("%d! = %d", num, res);
}

int main()
{
    int num;
    printf("Digite um numero qualquer: ");
    scanf("%d",&num);
    fat(num);

    return 0;
}