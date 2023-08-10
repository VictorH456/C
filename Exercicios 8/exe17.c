//Nome: Victor Hugo Souza Costa
//Matricula: 2022010016
// 17.Elabore um programa que leia um arquivo binário contendo 100 números. Mostre
//na tela a soma desses números.

#include <stdio.h>
#define SIZE 100

int main() {
    FILE *arquivo;
    int numeros[SIZE];
    int soma = 0;
    arquivo = fopen("numeros.bin", "rb");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    fread(numeros, sizeof(int), SIZE, arquivo);

    fclose(arquivo);

    for (int i = 0; i < SIZE; i++) {
        soma += numeros[i];
    }

    printf("A soma dos numeros e: %d\n", soma);

    return 0;
}