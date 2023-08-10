//Nome: Victor Hugo Souza Costa
//Matricula: 2022010016
// 20.Considerando a estrutura atleta do exercício anterior, escreva um programa que leia
//um arquivo binário contendo os dados de cinco atletas. Calcule e exiba o nome do
//atleta mais alto e do mais velho.

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
    struct Atleta atletaMaisAlto;
    struct Atleta atletaMaisVelho;
    arquivo = fopen("atletas.bin", "rb");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    fread(atletas, sizeof(struct Atleta), 5, arquivo);

    fclose(arquivo);

    atletaMaisAlto = atletas[0];
    atletaMaisVelho = atletas[0];

    for (int i = 1; i < 5; i++) {
        if (atletas[i].altura > atletaMaisAlto.altura) {
            atletaMaisAlto = atletas[i];
        }
        if (atletas[i].idade > atletaMaisVelho.idade) {
            atletaMaisVelho = atletas[i];
        }
    }

    printf("Atleta mais alto: %s\n", atletaMaisAlto.nome);
    printf("Atleta mais velho: %s\n", atletaMaisVelho.nome);

    return 0;
}