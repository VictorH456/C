//Nome: Victor Hugo Souza Costa 
//Matricula: 2022010016
// 18.Faça um programa que receba um número inteiro maior do que 1 e verifique se o número fornecido
// é primo ou não.

#include<stdio.h>

int main()
{
    int num, primo = 0;
    scanf("%d",&num);
    if(num>1)
    {
        if (num == 2)
        {
            printf("E primo");
        }
        else
        {
            for (int i = 2; i < num; i++)
            {
                if (num%i == 0)
                {
                    primo++;
                }
                
            }
            if (primo == 0)
            {
                printf("E primo");
            }
            else
            {
                printf("Nao e primo");
            }
        }
    }
    return 0;
}