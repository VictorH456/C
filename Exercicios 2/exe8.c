/* Nome: Victor Hugo Souza Costa 
Matricula: 2022010016

8.Leia um valor que represente uma temperatura em graus Celsius e apresente-a
convertida em graus Fahrenheit. A fórmula de conversão é: F = C * (9.0/5.0) +
32.0, sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.*/

#include<stdio.h>

int main(void)
{
    //Definindo a variavel.
    float temperatura;

    printf("Digite a temperatura: "); //Estetica
    scanf("%f",&temperatura); //Entrada da temperatura.

    printf("A conversao ficou %5.2f",temperatura*9/5+32); //Resultado.
    return 0;
}