/* Nome: Victor Hugo Souza Costa 
Matricula: 2022010016

7.Elabore um programa que leia um caractere e depois o imprima como um valor
inteiro.*/


#include<stdio.h>

int main(void)
{
    char valor;
    printf("Digite um caracctere: "); //Apenas apresentativo.
    scanf("%d",&valor); //entrada simples.
    printf("O valor ficou: %d", valor); //Print final mostrando o resultado.
    return 0;
}