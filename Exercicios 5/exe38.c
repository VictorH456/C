//Nome: Victor Hugo Souza Costa
//Matricula: 2022010016
//38.Construa um programa que leia duas strings do teclado. Imprima uma mensagem
//informando quantas vezes a segunda string lida está contida dentro da primeira.

#include <stdio.h>

int main()
{
    char str1[100]; // cria uma variável para armazenar a primeira string
    char str2[100]; // cria uma variável para armazenar a segunda string
    int i = 0; // cria uma variável para percorrer a primeira string
    int j = 0; // cria uma variável para percorrer a segunda string
    int contida = 0; // cria uma variável para contar quantas vezes a segunda string está contida na primeira
    
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
                contida++; // incrementa o contador de vezes que a segunda string está contida na primeira
                j = 0; // reinicia o índice da segunda string
            }
        }
        else // caso contrário
        {
            j = 0; // reinicia o índice da segunda string
        }
        i++; // incrementa o índice da primeira string
    }
    
    printf("A segunda string esta contida na primeira %d vezes.\n", contida); // imprime o número de vezes que a segunda string está contida na primeira
    
    return 0;
}
