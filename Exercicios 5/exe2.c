//Nome: Victor Hugo Souza Costa
//Matricula: 2022010016
// 2.Crie um programa que leia do teclado seis valores inteiros e em seguida mostre na
// tela os valores lidos na ordem inversa.

#include<stdio.h>

int main()
{
    int valores[6];

    printf("Digite 6 valores inteiros: ");

    for (int i = 0; i < 6; i++){scanf("%d",&valores[i]);}
    
    printf("Os valores lidos foram: ");
    
    for (int i = 6; i > 0; i--)
    {
        printf("%d ",valores[i-1]);
    }
    return 0;
}