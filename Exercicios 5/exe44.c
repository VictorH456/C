//Nome: Victor Hugo Souza Costa
//Matricula: 2022010016
//44.Escreva um programa que leia duas strings e as imprima em ordem alfabética, a
//ordem em que elas apareceriam em um dicionário.

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100]; // cria uma variável para armazenar a primeira string
    char str2[100]; // cria uma variável para armazenar a segunda string
    int cmp; // cria uma variável para armazenar o resultado da comparação entre as strings
    
    printf("Digite a primeira string: "); // pede ao usuário para digitar a primeira string
    scanf("%s", str1); // lê a primeira string do teclado e armazena na variável
    
    printf("Digite a segunda string: "); // pede ao usuário para digitar a segunda string
    scanf("%s", str2); // lê a segunda string do teclado e armazena na variável
    
    cmp = strcmp(str1, str2); // compara as strings lexicograficamente usando a função strcmp da biblioteca string.h
    
    if (cmp < 0) // verifica se a primeira string é menor que a segunda na ordem alfabética
    {
        printf("As strings em ordem alfabética são: %s %s\n", str1, str2); // imprime as strings nessa ordem
    }
    else if (cmp > 0) // verifica se a primeira string é maior que a segunda na ordem alfabética
    {
        printf("As strings em ordem alfabética são: %s %s\n", str2, str1); // imprime as strings nessa ordem
    }
    else // caso contrário, as strings são iguais
    {
        printf("As strings são iguais.\n"); // imprime essa mensagem
    }
    
    return 0;
}
