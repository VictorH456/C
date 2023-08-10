//Nome: Victor Hugo Souza Costa
//Matricula: 2022010016
// 8.Escreva uma função que receba como parâmetro o nome de um arquivo texto e retorne
//quantas vogais esse arquivo possui

#include<stdio.h>
#include<ctype.h>

int contarVogaisArquivo(const char *nome_arquivo) {
    FILE *fp;
    char caractere;
    int quantidade_vogais = 0;
    fp = fopen(nome_arquivo, "r");
if (fp == NULL) {
    perror("fopen");
    return -1;
}
while ((caractere = fgetc(fp)) != EOF) {
    caractere = tolower(caractere); // Converter o caractere para minúsculo
    if (caractere == 'a' || caractere == 'e' || caractere == 'i' ||
        caractere == 'o' || caractere == 'u') {
        quantidade_vogais++; // Incrementar a quantidade de vogais encontradas
    }
}
    fclose(fp);
    return quantidade_vogais;
}
int main()
{
    char nome_arquivo[FILENAME_MAX];
    printf("Digite o nome do arquivo: ");
    scanf("%s", nome_arquivo);

    int quantidade_vogais = contarVogaisArquivo(nome_arquivo);

    if (quantidade_vogais == -1) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    printf("O arquivo possui %d vogais.\n", quantidade_vogais);
    return 0;
}