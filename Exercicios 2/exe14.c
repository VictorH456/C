/* Nome: Victor Hugo Souza Costa 
Matricula: 2022010016

14.Faça um programa que converta uma letra maiúscula em letra minúscula. Use a
tabela ASCII para isso.*/

//Importação das bibliotecas.
#include<stdio.h>
#include<ctype.h>

int main(void)
{
    //Definindo a variavel.
    char letra;

    printf("Digite a letra Maiuscula: "); //Estetica
    scanf("%c",&letra); //Entrada os valores    

    printf("A letra minuscula fica: %c",tolower(letra)); // Resultado
    return 0;
}