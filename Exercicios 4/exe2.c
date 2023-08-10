// Nome: Victor Hugo Souza Costa 
// Matricula: 2022010016
//2. Faça um programa que leia um número inteiro positivo N e imprima todos os números naturais de 0
//até N em ordem decrescente.

#include<stdio.h>

int main()
{
    int num;
    printf("Digite um numero qualquer: ");
    scanf("%d",&num);

    for (int i = num; i >= 0; i--)
    {
        printf("%d\n",i);
    }
    
    return 0;
}