//Nome: Victor Hugo Souza Costa
//Matricula: 2022010016
// 31.Faça um programa que leia uma string e imprima as quatro primeiras letras dela.

#include <stdio.h>

int main()
{
    char str[100]; // cria uma variável para armazenar a string

    printf("Digite uma string: "); // pede ao usuário para digitar uma string
    scanf("%s", str); // lê a string do teclado e armazena na variável
    
    printf("As quatro primeiras letras da string sao: %.4s\n", str); // imprime as quatro primeiras letras da string usando o especificador de formato %.4s
    
    return 0;
}
