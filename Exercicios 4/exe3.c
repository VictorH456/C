// Nome: Victor Hugo Souza Costa 
// Matricula: 2022010016
//3. Faça um programa que leia um número inteiro N e depois imprima os N primeiros números naturais
//ímpares.

#include<stdio.h>

int main()
{
    int num,valores = 1;
    
    printf("Digite um numero qualquer: ");
    scanf("%d",&num);

    for (int i = 0; i < num; i++)
    {
        printf("%d\n",valores);
        valores+=2;
    }
    
    
    
    
    return 0;
}