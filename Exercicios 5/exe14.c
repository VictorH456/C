//Nome: Victor Hugo Souza Costa
//Matricula: 2022010016
// 14.Faça um programa que calcule o desvio-padrão d de um vetor V contendo n números
//em que m é a média desse vetor. Considere n = 10. O vetor v deve ser lido do teclado.

#include<stdio.h>
#include<math.h>

int main()
{
    double vetor[10], D, somatoria = 0, media = 0;

    for (int i = 0; i < 10; i++)
    {
        scanf("%lf",&vetor[i]);
        media += vetor[i];
    }
    media /= 10; 

    for (int i = 0; i < 10; i++)
    {
        somatoria += vetor[i] - media;
    }
    D = sqrt(1.0/9*somatoria);

    printf("O desvio seguindo a formula e: %lf",D);

    return 0;
}