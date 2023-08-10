//Nome: Victor Hugo Souza Costa
//Matricula: 2022010016
// 24.Faça um programa que permita ao usuário entrar com uma matriz de tamanho 3 × 3 de
// números inteiros. Em seguida, calcule um vetor contendo três posições, em que cada
// posição deverá armazenar a soma dos números de cada coluna da matriz. Exiba na tela
// esse array.

#include<stdio.h>

int main()
{
    int matriz[3][3], vetor[3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d",&matriz[i][j]);
            if (j == 0)
            {
                vetor[0] += matriz[i][j];
            }
            else if (j == 1)
            {
                vetor[1] += matriz[i][j];
            }
            else if (j == 2)
            {
                vetor[2] += matriz[i][j];
            }
            
        }
        
    }
    printf("A soma da coluna 1: %d da 2: %d da 3: %d",vetor[0],vetor[1],vetor[2]);
    return 0;
}