//Nome: Victor Hugo Souza Costa
//Matricula: 2022010016
// 13.Faça um programa que leia um arquivo texto contendo os dados de um aluno. Cada
//linha do arquivo contém o número de matrícula, o nome e as notas de três provas de
//um aluno. Os dados devem ser lidos e armazenados em uma estrutura. Em seguida,
//exiba os dados lidos em tela.

#include<stdio.h>
#include<stdlib.h>

typedef struct Aluno {
    int matricula;
    char nome[100];
    float nota1;
    float nota2;
    float nota3;
} Aluno;

int main() {
    FILE *arquivo = fopen("aluno.txt", "r");
    if (arquivo == NULL) {
    printf("Erro ao abrir o arquivo.\n");
    return 1;
    }
    Aluno aluno;

    while (fscanf(arquivo, "%d %s %f %f %f", &aluno.matricula, aluno.nome, &aluno.nota1, &aluno.nota2, &aluno.nota3) == 5) {
        printf("Matricula: %d\n", aluno.matricula);
        printf("Nome: %s\n", aluno.nome);
        printf("Nota 1: %.2f\n", aluno.nota1);
        printf("Nota 2: %.2f\n", aluno.nota2);
        printf("Nota 3: %.2f\n", aluno.nota3);
        printf("\n");
    }

    fclose(arquivo);

    return 0;

}