// Nome: Victor Hugo Souza Costa 
// Matricula: 2022010016
// 6.Faça um programa que mostre uma contagem regressiva na tela, iniciando em 10 e terminando em
// 0. Mostre uma mensagem “FIM!” após a contagem.

#include<stdio.h>

int main()
{
    int num = 10;

    for (int i = num; i >= 0; i--)
    {
        printf("%d\n",i);
    }
    printf("Fim");
    
    return 0;
}