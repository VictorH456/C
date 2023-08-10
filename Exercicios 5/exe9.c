//Nome: Victor Hugo Souza Costa
//Matricula: 2022010016
// 9.Faça um programa que receba do usuário dois arrays, A e B, com 10 números inteiros
//cada. Crie um novo array C calculando C = A – B. Mostre na tela os dados do array
//C.

#include<stdio.h>

int main()
{
    int A[10],B[10],C[10];

    printf("Digite 10 num. do vetor A: ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&A[i]);
    }

    printf("Digite 10 num. do vetor B: ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&B[i]);
    }

    printf("Os valores do array C sao: ");
    for (int i = 0; i < 10; i++)
    {
        C[i] = A[i] - B[i];
        printf("%d",C[i]);
    }

    return 0;
}