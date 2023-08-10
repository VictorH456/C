//Nome: Victor Hugo Souza Costa
//Matricula: 2022010016
// 4.Elaborejj um programa no qual o usuário informe o nome de um arquivo texto e uma
//palavra, e o programa informe o número de vezes que aquela palavra aparece dentro
//do arquivo.

#include<stdio.h>
#include<string.h>

#define MAX 100

int main(){
    FILE *fp;
    char nome[FILENAME_MAX], palavra[MAX];
    size_t quantidade = 0;
    int total = 0;

    printf("Digite o nome do arquivo: ");
    scanf("%s", nome);

    printf("Digite a palavra: ");
    scanf("%s", palavra);

    fp = fopen(nome, "r");
    if (fp == NULL) {
        perror("fopen");
        return 1;
    }

    char linha[MAX];

    while (fgets(linha, MAX, fp) != NULL) {
        if (!feof(fp)) {
            char *posicao = linha;
            while ((posicao = strstr(posicao, palavra)) != NULL) {
                quantidade++;
                posicao += strlen(palavra);
            }
        }
    }

    fclose(fp);
    printf("A palavra '%s' aparece %d vezes no arquivo.\n", palavra, quantidade);

    return 0;
}