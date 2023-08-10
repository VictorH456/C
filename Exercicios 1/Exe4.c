/* Nome: Victor Hugo Souza Costa 
Matricula: 2022010016
4. Faça um programa que leia um número inteiro e depois o imprima usando o
operador “%f”. Veja o que aconteceu. */

#include<stdio.h>

int main(void)
{
    int num;
    printf("Digite um valor qualquer: "); //Apenas apresentativo.
    scanf("%d",&num); //Entrada simples.
    printf("Veja o que aconteceu :) %f", num); //Print final contendo o resultado.
    return 0;
}