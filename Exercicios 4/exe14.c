//Nome: Victor Hugo Souza Costa 
//Matricula: 2022010016
// 14.Escreva um programa que leia um número inteiro, maior ou igual a zero, do usuário. Imprima o
//enésimo termo da sequência de Fibonacci. Essa sequência começa no termo de ordem zero, e, a
//partir do segundo termo, seu valor é dado pela soma dos dois termos anteriores. Alguns termos
//dessa sequência são: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34.

#include<stdio.h>

int main()
{
    //Declaração das variaveis.
    int num, valor = 0,valor2 = 1, valor3 = 0;
    scanf("%d",&num); //entrada.
    
    if (num >= 0) //condição caso seja maior que 0
    {
        for (int i = 2; i < num; i++) // For fib
        {
            valor3 = valor + valor2; //Valor 3 recebe a somas dos outros 2.
            valor = valor2; //depois o valor recebe o valor2
            valor2 = valor3; //e o valor2 recebe o valor3
        }
        if (num = 1) //Caso seja 1, o laço não inicia e assim assumiria o valor 0.
        {
            printf("%d",valor2); //print especifico.
        }
        else
        {
        printf("%d",valor3); //print Caso seja qualquer outro valor. 
        }
    }
    return 0;
}