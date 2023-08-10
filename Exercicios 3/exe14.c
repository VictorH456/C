/* Nome: Victor Hugo Souza Costa 
Matricula: 2022010016

14.Faça um programa para verificar se determinado número inteiro lido é divisível
por 3 ou 5, mas não simultaneamente pelos dois.*/

#include<stdio.h>

int main()
{
    //Definindo as variaveis.
    int num;

    printf("Digite um numero inteiro: ");
    scanf("%d",&num); //Entrada de dado.

    if ((!(num%3 == 0 && num%5 == 0/*O resultado aqui fica falso por causa do !(not)*/)) && (num%3 == 0 || num%5 == 0)) //condição
    {
        printf("O numero digitado e divisivel por 3 ou 5");
    }
    

    return 0;
}