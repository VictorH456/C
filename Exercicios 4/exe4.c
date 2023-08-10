// Nome: Victor Hugo Souza Costa 
// Matricula: 2022010016
// Faça um programa que determine e mostre os cinco primeiros múltiplos de 3 considerando
// números maiores que 0.

#include<stdio.h>

int main()
{
    int num = 3,cont = 5;
    
    for (int i = 0; i < cont; i++)
    {
        printf("%d",num);
        num += num;
    }
    
    return 0;
}