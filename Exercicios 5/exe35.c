//Nome: Victor Hugo Souza Costa
//Matricula: 2022010016
//35.Leia uma string do teclado e conte quantas vogais (a, e, i, o, u) ela possui. Entre com um
//caractere (vogal ou consoante) e substitua todas as vogais da palavra dada por esse
//caractere. Ao final, imprima a nova string e o número de vogais que ela possui.

#include <stdio.h>

int main()
{
    char str[100]; // cria uma variável para armazenar a string
    char c; // cria uma variável para armazenar o caractere
    int i = 0; // cria uma variável para percorrer a string
    int vogais = 0; // cria uma variável para contar as vogais

    printf("Digite uma string: "); // pede ao usuário para digitar uma string
    scanf("%s", str); // lê a string do teclado e armazena na variável
    
    printf("Digite um caractere: "); // pede ao usuário para digitar um caractere
    scanf(" %c", &c); // lê o caractere do teclado e armazena na variável
    
    while (str[i] != '\0') // percorre a string até encontrar o caractere nulo que indica o fim da string
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || // verifica se o caractere atual é uma vogal minúscula
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') // ou uma vogal maiúscula
        {
            vogais++; // incrementa o contador de vogais
            str[i] = c; // substitui o caractere atual pelo caractere dado pelo usuário
        }
        i++; // incrementa o índice da string
    }
    
    printf("A nova string e: %s\n", str); // imprime a nova string
    printf("A nova string possui %d vogais.\n", vogais); // imprime o número de vogais da nova string
    
    return 0;
}