//Nome: Victor Hugo Souza Costa
//Matricula: 2022010016
//40.Escreva um programa que leia uma string do teclado e converta todos os seus
//caracteres em minúscula. Dica: some 32 dos caracteres cujo código ASCII está entre
//65 e 90.

#include <stdio.h>

int main()
{
    char str[100]; // cria uma variável para armazenar a string
    int i = 0; // cria uma variável para percorrer a string
    
    printf("Digite uma string: "); // pede ao usuário para digitar uma string
    scanf("%s", str); // lê a string do teclado e armazena na variável
    
    while (str[i] != '\0') // percorre a string até encontrar o caractere nulo que indica o fim da string
    {
        if (str[i] >= 'A' && str[i] <= 'Z') // verifica se o caractere atual é uma letra maiúscula
        {
            str[i] = str[i] + 32; // soma 32 ao código ASCII do caractere para obter a letra minúscula correspondente
        }
        i++; // incrementa o índice da string
    }
    
    printf("A string em minuscula e: %s\n", str); // imprime a string em minúscula
    
    return 0;
}
