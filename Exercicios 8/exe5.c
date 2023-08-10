//Nome: Victor Hugo Souza Costa
//Matricula: 2022010016
//5. Faça um programa que leia números positivos e os converta em binário. Cada número
// binário deverá ser salvo em uma linha de um arquivo texto. O programa termina
// quando o usuário digitar um número negativo.
#include <stdio.h>
#include <stdlib.h>

void decToBinary(int num, FILE *file) { // função que transforma o número em binario
    if (num > 1)
        decToBinary(num / 2, file);

    fprintf(file, "%d", num % 2);
}

int main() {
    FILE *fp1;
    char nome1[FILENAME_MAX];
    int valor = 0;

    printf("Digite o nome do arquivo para salvar os números: ");
    scanf("%s", nome1);

    fp1 = fopen(nome1, "a");

    if (fp1 == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    for (;;) {
        printf("Digite um valor a ser transformado em binário: ");
        scanf("%d", &valor);

        if (valor < 0) {
            break;
        } else {
            decToBinary(valor, fp1);
            fprintf(fp1, "\n");
        }
    }

    fclose(fp1);
    return 0;
}
