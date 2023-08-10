//Nome: Victor Hugo Souza Costa
//Matricula: 2022010016
//32. Sem usar a função strlen(), faça um programa que leia uma string e imprima quantos
//caracteres ela possui.

#include <stdio.h>

int main()
{
    char str[100]; // cria uma variável para armazenar a string
    int i = 0; // cria uma variável para contar os caracteres

    printf("Digite uma string: "); // pede ao usuário para digitar uma string
    scanf("%s", str); // lê a string do teclado e armazena na variável

    while (str[i] != '\0') // percorre a string até encontrar o caractere nulo que indica o fim da string
    {
        i++; // incrementa o contador de caracteres
    }
    
    printf("A string possui %d caracteres.\n", i); // imprime o número de caracteres da string
    
    return 0;
}
