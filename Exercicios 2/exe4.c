/* Nome: Victor Hugo Souza Costa 
Matricula: 2022010016

4.Leia quatro valores do tipo float. 
Calcule e exiba a média aritmética desses valores.*/

#include<stdio.h>

int main(void)
{
    float num1,num2,num3,num4; //Declaração de variaveis.

    printf("Digite 4 numeros reais: "); //Apenas para estetica.
    scanf("%f %f %f %f", &num1, &num2, &num3, &num4); //Entrada dos valores.
    printf("A media aritmetica deles e: %5.2f",(num1+num2+num3+num4)/4); //Print mostrando a media aritmetica deles.
    return 0;
}