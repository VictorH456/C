/* Nome: Victor Hugo Souza Costa 
Matricula: 2022010016

15.Faça um programa para ler um número inteiro positivo de três dígitos. Em
seguida, calcule e mostre o número formado pelos dígitos invertidos do número
lido. Exemplo: Número lido = 123 Número gerado = 321*/

//Bibliotecas.
#include<stdio.h>
#include<string.h>

int main(void)
{
    //Definindo as variaveis.
    int numeros, num1, num2, num3,num4;

    printf("Digite 3 numeros: "); //Estetica.
    scanf("%d", &numeros); //Entrada dos dados

    //Em c não existe uma função que reverte uma string ou um número, essa foi a forma mais resumidade de fazer isso.
    num1 = numeros % 10; //forma de pegar a unidade do numero(O ultimo numero.)
    num2 = (numeros % 100)/10; //o do meio/dezena.
    num3 = numeros / 100; //A centena.
    
    printf("Resultado: %d%d%d\n", num1, num2, num3); //Resultado

    return 0;
}
