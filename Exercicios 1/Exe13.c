/* Nome: Victor Hugo Souza Costa 
Matricula: 2022010016

13.Faça um programa que leia um caractere do tipo char e depois o imprima entre
aspas duplas. Assim, se o caractere lido for a letra A, deverá ser impresso “A”.
*/


#include<stdio.h>

int main()
{
    char valor[1]; //Definindo a variavel str/char.
    scanf("%c",&valor); //Entrada simples de um caractere.
    printf("\"%s\"",valor); //Print final mostrando os resultados.
    return 0;
}