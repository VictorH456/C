//Nome: Victor Hugo Souza Costa
//Matricula: 2022010016
// 1.Crie um programa que leia do teclado seis valores inteiros e em seguida mostre na
// tela os valores lidos.

#include<stdio.h>

int main()
{
    int valores[6];

    printf("Digite 6 valores inteiros: ");

    for (int i = 0; i < 6; i++){scanf("%d",&valores[i]);}
    
    printf("Os valores lidos foram: ");
    
    for (int i = 0; i < 6; i++)
    {
        printf("%d ",valores[i]);
    }
    

    return 0;
}