//Nome: Victor Hugo Souza Costa
//Matricula: 2022010016
//42.Escreva um programa que recebe uma string S e dois valores inteiros não negativos
//i e j. Em seguida, imprima os caracteres contidos no segmento que vai de i a j da
//string S.

#include <stdio.h>

int main()
{
    char S[100]; // cria uma variável para armazenar a string S
    int i; // cria uma variável para armazenar o valor de i
    int j; // cria uma variável para armazenar o valor de j
    int k; // cria uma variável para percorrer o segmento da string S
    
    printf("Digite uma string: "); // pede ao usuário para digitar uma string
    scanf("%s", S); // lê a string do teclado e armazena na variável
    
    printf("Digite dois valores inteiros nao negativos: "); // pede ao usuário para digitar dois valores inteiros não negativos
    scanf("%d %d", &i, &j); // lê os valores do teclado e armazena nas variáveis
    
    printf("Os caracteres contidos no segmento que vai de %d a %d da string S sao: ", i, j); // imprime a mensagem inicial
    
    for (k = i; k <= j; k++) // percorre o segmento da string S que vai de i a j
    {
        printf("%c", S[k]); // imprime o caractere atual
    }
    
    printf("\n"); // imprime uma quebra de linha
    
    return 0;
}
