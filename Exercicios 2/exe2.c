/* Nome: Victor Hugo Souza Costa 
Matricula: 2022010016

2.Faça um programa que leia um número real e 
imprima a quinta parte desse número*/

#include<stdio.h>

int main(void)
{
    float num; //Declarando as Variaveis.
    printf("Digite um valor real: "); //Apenas pra ficar bonito.
    scanf("%f",&num); //entrada do numero real.

    //print mostrando a quinta parte
    printf("o numero:%5.2f e a quinta parte e: %5.2f", num, num/5); 

    return 0;
}