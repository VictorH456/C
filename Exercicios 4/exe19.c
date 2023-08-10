//Nome: Victor Hugo Souza Costa 
//Matricula: 2022010016
// 19.Faça um programa que calcule e escreva o valor de S:
#include<stdio.h>

const int razao = 2; //Define a razão do numerador.
int main()
{
    //Define as variaveis Soma(S) e valor(para somar a razão).
    double soma = 1, valor = 1;

    for (int i = 2; i < 56; i++) //laço do tamanho do divisor(55).
    {
        valor += razao; //Atualiza somando a razao ao valor a cada loop.
        soma += valor/i; //Soma todos os valores.
    }
    printf("%.2lf", soma); //printdo resultado.
    
    return 0;
}