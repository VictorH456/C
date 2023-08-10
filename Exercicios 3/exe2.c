/* Nome: Victor Hugo Souza Costa 
Matricula: 2022010016

2.Faça um programa que leia dois números e mostre o maior deles. Se, por acaso,
os dois números forem iguais, imprima a mensagem “Números iguais”.*/

#include<stdio.h>

int main(void)
{
    //Definindo as variaveis.
    float num1,num2;
    printf("Digite dois nuemros inteiros: "); //Estetica.
    scanf("%f %f", &num1, &num2); //Entrada dos dois numeros.

    if (num1>num2) //Condição se caso numero 1 seja maior.
    {
        printf("%5.2f e maior que %5.2f",num1,num2); //Print mostrando os resultados.
    }
    else if (num1<num2) //Caso numero 2 seja maior.
    {
        printf("%5.2f e maior que %5.2f",num2,num1); //Print mostrando os resultados.
    }
    else //Caso sejam iguais.
    {
        printf("%5.2f e %5.2f sao iguais", num1, num2); //Print mostrando os resultados.
    }
    

    return 0;    
}