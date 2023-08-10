/* Nome: Victor Hugo Souza Costa 
Matricula: 2022010016

10.Faça um programa que leia três
números inteiros positivos e
efetue o cálculo de uma das
seguintes médias de acordo com
um valor numérico digitado pelo
usuário*/

#include<stdio.h>

int main()
{
    //Definindo as variaveis.
    float num1, num2, num3;
    int verificar;
    
    printf("Digite 4 valores sendo os tres primeiros valores da equacao\ne o ultimo a escolha da equacao[1,2,3,4]: ");
    scanf("%f %f %f %d", &num1, &num2, &num3, &verificar); //Entrada dos 4 valores.

    
    switch (verificar) //Condição.
    {
    case 1:
        printf("Geometrica: %.0f",num1*num2*num3);
        break;

    case 2:
        printf("Ponderada: %.2f",(num1+2*num2+3*num3)/6);
        break;

    case 3:
        printf("Harmonica: %.2f",1/(1/num1+1/num2+1/num3));
        break;

    default:
        printf("Aritmetica: %.2f",(num1+num2+num3)/3);
        break;
    }

    return 0;
}