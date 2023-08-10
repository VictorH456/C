//Nome: Victor Hugo Souza Costa
//Matricula: 2022010016
// 33.Faça um programa que leia uma string e a imprima de trás para a frente.

#include <stdio.h>

int main()
{
    char str[100]; // cria uma variável para armazenar a string
    int i = 0; // cria uma variável para contar os caracteres
    int j; // cria uma variável para percorrer a string de trás para a frente
    
    printf("Digite uma string: "); // pede ao usuário para digitar uma string
    scanf("%s", str); // lê a string do teclado e armazena na variável
    
    while (str[i] != '\0') // percorre a string até encontrar o caractere nulo que indica o fim da string
    {
        i++; // incrementa o contador de caracteres
    }
    
    printf("A string de tras para a frente e: ");
    
    for (j = i - 1; j >= 0; j--) // percorre a string de trás para a frente, começando pelo último caractere e terminando pelo primeiro
    {
        printf("%c", str[j]); // imprime o caractere atual
    }
    
    printf("\n");
    
    return 0;
}
