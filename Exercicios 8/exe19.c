//Nome: Victor Hugo Souza Costa
//Matricula: 2022010016
// 19.Crie uma estrutura representando um atleta. Essa estrutura deve conter o nome do
//atleta, seu esporte, idade e altura. Agora, escreva um programa que leia os dados
//de cinco atletas e os armazene em um arquivo binário.

#include <stdio.h>
#include <string.h>

struct Atleta {
    char nome[100];
    char esporte[100];
    int idade;
    float altura;
};

int main() {
    FILE *arquivo;
    struct Atleta atletas[5];
    arquivo = fopen("atletas.bin", "wb");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    for (int i = 0; i < 5; i++) {
        printf("Digite o nome do atleta %d: ", i + 1);
        scanf("%s", atletas[i].nome);
        printf("Digite o esporte do atleta %d: ", i + 1);
        scanf("%s", atletas[i].esporte);
        printf("Digite a idade do atleta %d: ", i + 1);
        scanf("%d", &atletas[i].idade);
        printf("Digite a altura do atleta %d: ", i + 1);
        scanf("%f", &atletas[i].altura);
        printf("\n");
    }

    fwrite(atletas, sizeof(struct Atleta), 5, arquivo);

    fclose(arquivo);

    return 0;
}