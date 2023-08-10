//Nome: Victor Hugo Souza Costa
//Matricula: 2022010016
//37. Construa um programa que leia duas strings do teclado. Imprima uma mensagem
//informando se a segunda string lida está contida dentro da primeira.

#include <stdio.h>

int main()
{
    //Definindo variaveis
    char str1[100]; 
    char str2[100]; 
    int i = 0;
    int j = 0; 
    int contida = 0; 

    printf("Digite a primeira string: "); // pede ao usuário para digitar a primeira string
    scanf("%s", str1); // lê a primeira string do teclado e armazena na variável

    printf("Digite a segunda string: "); // pede ao usuário para digitar a segunda string
    scanf("%s", str2); // lê a segunda string do teclado e armazena na variável

    while (str1[i] != '\0') // percorre a primeira string até encontrar o caractere nulo que indica o fim da string
    {
        if (str1[i] == str2[j]) // verifica se o caractere atual da primeira string é igual ao caractere atual da segunda string
        {
            j++; // incrementa o índice da segunda string
            if (str2[j] == '\0') // verifica se o próximo caractere da segunda string é o nulo que indica o fim da string
            {
                contida = 1; // muda o valor da variável para indicar que a segunda string está contida na primeira
                break; // sai do loop
            }
        }
        else // caso contrário
        {
            j = 0; // reinicia o índice da segunda string
        }
        i++; // incrementa o índice da primeira string
    }

    if (contida == 1) // verifica se a variável indica que a segunda string está contida na primeira
    {
        printf("A segunda string esta contida na primeira.\n"); // imprime a mensagem correspondente
    }
    else // caso contrário
    {
        printf("A segunda string nao esta contida na primeira.\n"); // imprime a mensagem correspondente
    }
    
    return 0;
}