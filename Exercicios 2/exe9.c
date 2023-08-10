/* Nome: Victor Hugo Souza Costa 
Matricula: 2022010016

9.Leia um ângulo em graus e apresente-o convertido em radianos. A fórmula de
conversão é R = G * π/180, sendo G o ângulo em graus e R em radianos e π = 3.141592.*/

#include<stdio.h>
//Criação de uma constante pi.
const float pi = 3.141592;

int main(void)
{
    //Definindo as variaveis.
    float angulo;

    printf("Digite o angulo: "); //Estetica.
    scanf("%f",&angulo); //Entrada do Ângulo.

    printf("A conversao ficou: %5.4f", angulo*pi/180); //mostrando o resultado.

    return 0;
}