//Nome: Victor Hugo Souza Costa
//Matricula: 2022010016
// 6.Faça um programa que leia um arquivo texto contendo uma lista de compras. Cada
//linha do arquivo possui nome, quantidade e valor unitário do produto. O programa
//então exibe o total da compra.

#include<stdio.h>

int main()
{
    FILE *fp;
    char nome_arquivo[FILENAME_MAX];
    char nome_produto[100];
    int quantidade;
    float valor_unitario;
    float total = 0.0;

    printf("Digite o nome do arquivo: ");
    scanf("%s", nome_arquivo);

    fp = fopen(nome_arquivo, "r");
    if (fp == NULL) { // Verifica se houve erro ao abrir o arquivo
        perror("fopen");
        return 1;
    }

    while (fscanf(fp, "%s %d %f", nome_produto, &quantidade, &valor_unitario) != EOF) {
        // Lê o nome do produto, a quantidade e o valor unitário de cada linha do arquivo
        // e continua no loop até o final do arquivo (EOF)

        float subtotal = quantidade * valor_unitario; // Calcula o subtotal para a linha atual
        total += subtotal; // Acumula o subtotal no total da compra
    }

    fclose(fp); // Fecha o arquivo após a leitura

    printf("O total da compra é: R$%.2f\n", total); // Exibe o total da compra na tela

    return 0;
}