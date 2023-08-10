//Nome: Victor Hugo Souza Costa
//Matricula: 2022010016
// 6.Escreva um programa que leia do teclado um vetor de 10 posições. Escreva na tela
//quantos valores pares foram armazenados nesse vetor

#include<stdio.h>

int main()
{
    int vetor[10], qtd = 0;

    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&vetor[i]);
        if (vetor[i]%2 == 0)
        {
            qtd ++;
        }
    }

    printf("A quantidade de valores e %d", qtd);

    return 0;
}