//Nome: Victor Hugo Souza Costa
//Matricula: 2022010016
//34. Faça um programa que leia uma string e a inverta. A string invertida deve ser
//armazenada na mesma variável. Em seguida, imprima a string invertida.

#include <stdio.h>

int main()
{
    //Definindo variaveis
    char str[100]; 
    int i = 0; 
    int j; 
    char temp;
    
    printf("Digite uma string: "); // pede ao usuário para digitar uma string
    scanf("%s", str); // lê a string do teclado e armazena na variável
    
    while (str[i] != '\0') // percorre a string até encontrar o caractere nulo que indica o fim da string
    {
        i++; // incrementa o contador de caracteres
    }
    
    for (j = 0; j < i / 2; j++) // percorre metade da string, trocando os caracteres das posições simétricas
    {
        temp = str[j]; // guarda o caractere da posição atual na variável temporária
        str[j] = str[i - 1 - j]; // copia o caractere da posição simétrica para a posição atual
        str[i - 1 - j] = temp; // copia o caractere da variável temporária para a posição simétrica
    }
    
    printf("A string invertida e: %s\n", str); // imprime a string invertida
    
    return 0;
}