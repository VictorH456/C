//Nome: Victor Hugo Souza Costa
//Matricula: 2022010016
// 18.Crie um programa que leia um arquivo binário contendo uma quantidade qualquer
//de números. O primeiro número lido indica quantos valores existem no arquivo.
//Mostre na tela o maior e o menor valor lido.

#include <stdio.h>

int main() {
    FILE *arquivo;
    int quantidade, numero, maior, menor;
    arquivo = fopen("numeros.bin", "rb");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    fread(&quantidade, sizeof(int), 1, arquivo);

    fread(&maior, sizeof(int), 1, arquivo);
    menor = maior;

    for (int i = 1; i < quantidade; i++) {
        fread(&numero, sizeof(int), 1, arquivo);
        if (numero > maior) {
            maior = numero;
        }
        if (numero < menor) {
            menor = numero;
        }
    }

    fclose(arquivo);

    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);
    return 0;
}