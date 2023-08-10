//Nome: Victor Hugo Souza Costa
//Matricula: 2022010016
// 8.Faça um programa que preencha um vetor com 10 números reais. Em seguida, calcule e
//mostre na tela a quantidade de números negativos e a soma dos números positivos
//desse vetor.

#include<stdio.h>

#include<stdio.h>

int main()
{
    double X[10], qtd_n = 0, soma_p = 0;

    printf("Digite dez valores:\n");
    scanf("%lf",&X[0]);
    
    for (int i = 1; i < 10; i++){
        scanf("%lf",&X[i]);
        if (X[i] < 0)
        {
            qtd_n ++;
        }
        else if(X[i]>0)
        {
            soma_p += X[i];
        }
    }
    printf("Quantidade negativo: %.2lf e a soma: %.2lf", qtd_n, soma_p);

    return 0;
}