/* Nome: Victor Hugo Souza Costa 
Matricula: 2022010016

16.Escreva um programa que leia um número inteiro e mostre a multiplicação e a
divisão desse número por dois (utilize os operadores de deslocamento de bits).*/

//biblioteca.
#include<stdio.h>

int main(void)
{
    //Definindo os valores.
    int num;

    printf("Digite um numero inteiro: "); //Estetica.
    scanf("%d",&num); //Entrada dos valores.
    
    printf("A divisao desse numero por 2 e: %d e a multiplicacao: %d",num>>1,num<<1); //Resultado.

    return 0;
}