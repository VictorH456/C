//Nome: Victor Hugo Souza Costa 
//Matricula: 2022010016
// 17.Escreva um programa que leia um número inteiro positivo N e em seguida imprima N linhas do
// chamado triângulo de Floyd:
#include<stdio.h>

int main()
{
    int num, valor = 1;

    scanf("%d",&num);

    for (int i = 1; i < num+2; i++)
    {
        for (int j = 1; j < i; j++)
        {
            printf("%d ",valor);
            valor ++;
        }
        printf("\n");
    }
    
    return 0;
}