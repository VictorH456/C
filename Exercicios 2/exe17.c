/* Nome: Victor Hugo Souza Costa 
Matricula: 2022010016

17.Escreva um programa que leia um número inteiro e mostre o seu complemento
bit a bit.*/

//Biblioteca.
#include<stdio.h>

int main(void)
{
    //Definindo as variaveis.
    int num;

    printf("Digite um numero inteiro: "); //Estetica.
    scanf("%d",&num); //Entrada dos valores.

    printf("Resultado: %d", ~num); //Resultado.

    return 0;
}