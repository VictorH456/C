/* Nome: Victor Hugo Souza Costa 
Matricula: 2022010016

14.Faça um programa que leia três caracteres do tipo char e depois os imprima um
em cada linha. Use um único comando printf() para isso.
*/

#include<stdio.h>

int main()
{
    char valor1,valor2,valor3; //Definindo as variaveis do tipo char/str.

    printf("Digite três caracteres separados por um espaco: "); //Apenas apresentativo.
    scanf("%c %c %c", &valor1, &valor2, &valor3); //Entrada das três variaveis char.

    printf("%c \n%c \n%c",valor1,valor2,valor3); //Print final, mostrando os resultados.
    return 0;
}