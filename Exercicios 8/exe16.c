//Nome: Victor Hugo Souza Costa
//Matricula: 2022010016
// 16.Elabore um programa para calcular e exibir o número de vezes que cada letra
//ocorre dentro de um arquivo texto. Ignore as letras com acento. O usuário deverá
//informar o nome do arquivo.

#include <stdio.h>
#include <ctype.h>

#define MAX 100

int main() {
    FILE *arquivo;
    char nomeArquivo[MAX];
    char caractere;
    int contador[26] = {0}; // Inicializa o contador para cada letra com zero
    printf("Digite o nome do arquivo: ");
    scanf("%s", nomeArquivo);

    arquivo = fopen(nomeArquivo, "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    while ((caractere = fgetc(arquivo)) != EOF) {
        if (isalpha(caractere)) {
            caractere = toupper(caractere);
            contador[caractere - 'A']++; // Incrementa o contador para a letra encontrada
        }
    }

    fclose(arquivo);

    printf("O numero de ocorrencias de cada letra:\n");
    for (int i = 0; i < 26; i++) {
        printf("%c: %d\n", 'A' + i, contador[i]);
    }

    return 0;
}