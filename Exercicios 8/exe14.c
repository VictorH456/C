//Nome: Victor Hugo Souza Costa
//Matricula: 2022010016
// 14.Crie um programa para calcular e exibir o número de palavras contido em um arquivo
//texto. O usuário deverá informar o nome do arquivo.

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int contarPalavras(FILE *arquivo) {
    int contador = 0;
    int caractereAnterior = ' ';
    int caractereAtual;
    while ((caractereAtual = fgetc(arquivo)) != EOF) {
    if (isspace(caractereAtual) && !isspace(caractereAnterior)) {
        contador++;
    }
    caractereAnterior = caractereAtual;
    }

    return contador;
}

int main()
{
    FILE *arquivo;
    char nomeArquivo[FILENAME_MAX];
    printf("Digite o nome do arquivo: ");
    scanf("%s", nomeArquivo);

    arquivo = fopen(nomeArquivo, "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    int numPalavras = contarPalavras(arquivo);

    printf("O arquivo contem %d palavras.\n", numPalavras);

    fclose(arquivo);

    return 0;
}