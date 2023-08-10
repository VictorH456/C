//Nome: Victor Hugo Souza Costa
//Matricula: 2022010016
//43.O código de César é uma das técnicas de criptografia mais simples e conhecidas. É
//um tipo de substituição no qual cada letra do texto é substituída por outra, que se
//apresenta n posições após ela no alfabeto. Por exemplo, com uma troca de três
//posições, a letra A seria substituída por D, B se tornaria E e assim por diante.
//Escreva um programa que faça uso desse código de César para três posições. Entre
//com uma string e imprima a string codificada. Exemplo:
//String: a ligeira raposa marrom saltou sobre o cachorro cansado.
//Nova string: d oljhlud udsrvd pduurp vdowrx vreuh r fdfkruur fdqvdgr

#include <stdio.h>

int main()
{
    char str[100]; // cria uma variável para armazenar a string
    int i = 0; // cria uma variável para percorrer a string
    
    printf("Digite uma string: "); // pede ao usuário para digitar uma string
    scanf("%[^\n]", str); // lê a string do teclado e armazena na variável, incluindo os espaços
    
    while (str[i] != '\0') // percorre a string até encontrar o caractere nulo que indica o fim da string
    {
        if (str[i] >= 'a' && str[i] <= 'z') // verifica se o caractere atual é uma letra minúscula
        {
            str[i] = (str[i] - 'a' + 3) % 26 + 'a'; // aplica o código de César para três posições, usando o módulo 26 para evitar sair do intervalo das letras
        }
        else if (str[i] >= 'A' && str[i] <= 'Z') // verifica se o caractere atual é uma letra maiúscula
        {
            str[i] = (str[i] - 'A' + 3) % 26 + 'A'; // aplica o código de César para três posições, usando o módulo 26 para evitar sair do intervalo das letras
        }
        i++; // incrementa o índice da string
    }
    
    printf("A string codificada e: %s\n", str); // imprime a string codificada
    
    return 0;
}
