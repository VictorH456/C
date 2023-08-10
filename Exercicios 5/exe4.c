//Nome: Victor Hugo Souza Costa
//Matricula: 2022010016
// 4.Faça um programa que leia um vetor de oito posições. Em seguida, leia também
//dois valores X e Y quaisquer correspondentes a duas posições no vetor. Seu
//programa deverá exibir a soma dos valores encontrados nas respectivas posições
//X e Y.

#include<stdio.h>

int main()
{
    int valores[8], x, y;

    printf("Digite 8 valores inteiros: ");

    for (int i = 0; i < 8; i++)
    {
        scanf("%d",&valores[i]);
    }
    printf("Digite dois valores X e Y: ");
    scanf("%d %d", &x, &y);

    printf("A soma dos valores nas posicoes %d e %d: %d", x, y, valores[x-1] + valores[y-1]);
    return 0;
}