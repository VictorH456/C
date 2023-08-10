/* Nome: Victor Hugo Souza Costa 
Matricula: 2022010016

1. Faça um programa que leia um número inteiro e 
retorne seu antecessor e seu sucessor.

*/

#include<stdio.h>

int main(void)
{
    int num; //Declaração da variavel.
    printf("Dgite um numero inteiro qualquer: "); //Apenas pra ficar bonito.
    scanf("%d",&num); //Entrada do numero inteiro.

    //Print mostrando o numero, antecessor e sucessor
    printf("Numero: %d, Antecessor: %d e seu Sucessor: %d.", num, num-1, num+1); 
    return 0;
}
