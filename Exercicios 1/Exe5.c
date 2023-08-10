/* Nome: Victor Hugo Souza Costa 
Matricula: 2022010016

5. Faça um programa que leia um valor do tipo float e depois o imprima usando o
operador “%d”. Veja o que aconteceu.*/

#include<stdio.h>

int main(void)
{
    float num;
    printf("Digite um valor Qualquer: "); //Apenas apresentativo.
    scanf("%f",&num); //Entrada simples.
    printf("Veja o que aconteceu :) %d", num); //Print final contendo o resultado.   
    return 0;
}
