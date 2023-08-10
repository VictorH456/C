//Nome: Victor Hugo Souza Costa
//Matricula: 2022010016
// 10.Usando a estrutura “atleta” do exercício anterior, escreva um programa que leia os
// dados de cinco atletas e os exiba por ordem de idade, do mais velho para o mais novo.
#include <stdio.h>
#include <string.h>

// Define uma estrutura "Atleta" que possui um nome, um esporte, uma idade e uma altura.
typedef struct Atleta {
    char nome[40];
    char esporte[20];
    int idade;
    float altura;
} Atleta;

// Função que ordena um array de atletas por idade (do mais velho para o mais novo).
void ordenaAtletasPorIdade(Atleta atletas[], int n) {
    int i, j;
    Atleta temp;

    // Loop externo percorrendo todo o array.
    for (i = 0; i < n-1; i++) {
        // Loop interno percorrendo até a posição final ainda não ordenada.
        for (j = 0; j < n-i-1; j++) {
            // Compara a idade do atleta atual com a idade do próximo atleta no array.
            // Se o atual for mais novo, troca a posição dos dois no array.
            if (atletas[j].idade < atletas[j+1].idade) {
                temp = atletas[j];
                atletas[j] = atletas[j+1];
                atletas[j+1] = temp;
            }
        }
    }
}

int main() {
    int i;
    Atleta atletas[5];

    // Loop que lê os dados dos atletas e armazena em um array.
    for (i = 0; i < 5; i++) {
        printf("Digite o nome do atleta %d: ", i+1);
        fgets(atletas[i].nome, 40, stdin);

        printf("Digite o esporte do atleta %d: ", i+1);
        fgets(atletas[i].esporte, 20, stdin);
        getchar(); // Limpa o buffer de entrada do teclado.

        printf("Digite a idade do atleta %d: ", i+1);
        scanf("%d", &atletas[i].idade);

        printf("Digite a altura do atleta %d (Ex: 1.7): ", i+1);
        scanf("%f", &atletas[i].altura);
    }

    // Chama a função para ordenar os atletas por idade.
    ordenaAtletasPorIdade(atletas, 5);

    // Loop que exibe os dados dos atletas ordenados por idade.
    printf("\nAtletas ordenados por idade (do mais velho para o mais novo):\n");
    for (i = 0; i < 5; i++) {
        printf("%s - %s - %d anos - %.2fm de altura\n", atletas[i].nome, atletas[i].esporte, atletas[i].idade, atletas[i].altura);
    }

    return 0;
}
