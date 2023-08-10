//Nome: Victor Hugo Souza Costa
//Matricula: 2022010016
//36. Faça um programa que leia uma string e imprima uma mensagem dizendo se ela é um
//palíndromo ou não. Um palíndromo é uma palavra que tem a propriedade de poder ser
//lida tanto da direita para a esquerda como da esquerda para a direita. Exemplos: ovo,
//arara, rever, asa, osso etc.

#include <stdio.h>

int main()
{
    //Definindo variaveis
    char str[100]; 
    int i = 0; 
    int j; 
    int palindromo = 1; 
    
    printf("Digite uma string: "); // pede ao usuário para digitar uma string
    scanf("%s", str); // lê a string do teclado e armazena na variável

    while (str[i] != '\0') // percorre a string até encontrar o caractere nulo que indica o fim da string
    {
        i++; // incrementa o contador de caracteres
    }

    for (j = 0; j < i / 2; j++) // percorre metade da string, comparando os caracteres das posições simétricas
    {
        if (str[j] != str[i - 1 - j]) // verifica se os caracteres são diferentes
        {
            palindromo = 0; // muda o valor da variável para indicar que a string não é um palíndromo
            break; // sai do loop
        }
    }

    if (palindromo == 1) // verifica se a variável indica que a string é um palíndromo
    {
        printf("A string e um palindromo.\n"); // imprime a mensagem correspondente
    }
    else // caso contrário
    {
        printf("A string nao e um palindromo.\n"); // imprime a mensagem correspondente
    }
    
    return 0;
}