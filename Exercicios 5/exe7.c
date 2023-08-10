//Nome: Victor Hugo Souza Costa
//Matricula: 2022010016
// 7.Faça um programa que receba do usuário um vetor X com 10 posições. Em seguida
//deverão ser impressos o maior e o menor elemento desse vetor.

#include<stdio.h>

int main()
{
    double X[10], maior, menor;

    printf("Digite dez valores:\n");
    scanf("%lf",&X[0]);
    maior = X[0]; menor = X[0];

    for (int i = 1; i < 10; i++){
        scanf("%lf",&X[i]);
        if (maior < X[i])
        {
            maior = X[i];
        }
        else if(menor > X[i])
        {
            menor = X[i];
        }
    }
    printf("O maior e %.2lf e o menor %.2lf", maior, menor);

    return 0;
}