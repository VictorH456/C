//Nome: Victor Hugo Souza Costa 
//Matricula: 2022010016
// 9.Escreva um programa que leia 10 números e escreva o menor valor lido e o maior valor lido.


#include<stdio.h>

int main()
{
    double valores[10], min,max;
    
    scanf("%lf",&valores[0]);
    min = valores[0];
    max = valores[0];

    for (int i = 1; i < 10; i++)
    {
        scanf("%lf",&valores[i]);
        fflush(stdin);
        
        if (valores[i]<min)
        {
            min = valores[i];
        }
        else if (valores[i]>max)
        {
            max = valores[i];
        }
        
    }

    printf("o minimo e %.2lf e o maximo e %.2lf",min,max);

    return 0;
}