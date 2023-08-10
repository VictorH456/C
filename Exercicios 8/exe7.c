//Nome: Victor Hugo Souza Costa
//Matricula: 2022010016
//7.Faça um programa que permita que o usuário entre com diversos nomes e telefone
// para cadastro. Crie um arquivo com essas informações, uma por linha. O usuário
// finaliza a entrada com o valor 0 para o telefone.

#include<stdio.h>

int main()
{
    FILE *fp;
    char nome_arquivo[FILENAME_MAX];
    char nome[100];
    int telefone;

    printf("Digite o nome do arquivo para salvar as informacoes: ");
    scanf("%s", nome_arquivo);

    fp = fopen(nome_arquivo, "w");
    if (fp == NULL) {
        perror("fopen");
        return 1;
    }

    while (1) {
        printf("Digite um nome (ou 0 para sair): ");
        scanf("%s", nome);

        if (strcmp(nome, "0") == 0) {
            break;
        }

        printf("Digite o telefone: ");
        scanf("%d", &telefone);

        fprintf(fp, "%s %d\n", nome, telefone);
    }

    fclose(fp);
    return 0;
}