/* Nome: Victor Hugo Souza Costa 
Matricula: 2022010016

3.Faça um programa que leia três valores inteiros e mostre sua soma.*/

#include<stdio.h>

int main(void)
{
    int num1,num2,num3; //declarando as variaveis.
    printf("Digite 3 numeros inteiros: "); //Apenas para ficar bonito.
    scanf("%d %d %d", &num1, &num2, &num3); //Entrada dos três valores separados por espaços.
    //print mostrando a soma dos três
    printf("A soma e: %d", num1 + num2 + num3);
    return 0;
}