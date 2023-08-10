/* Nome: Victor Hugo Souza Costa 
Matricula: 2022010016

7.Faça um programa que leia um valor em reais e a cotação do dólar. Em seguida,
imprima o valor correspondente em dólares.*/

#include<stdio.h>

int main(void)
{
    //Definindo as variaveis.
    float valor, cotacao;

    //Estetica.
    printf("(ex: 20 5)Digite um valor e ao lado a cotacao do dolar ");
    //Entrada dos valores separados por um espaço.
    scanf("%f %f", &valor, &cotacao);

    printf("A cotacao ficou: %f",valor/cotacao); //resultado
    return 0;
}