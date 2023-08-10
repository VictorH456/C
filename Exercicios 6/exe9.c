//Nome: Victor Hugo Souza Costa
//Matricula: 2022010016
// 9.Crie uma estrutura representando um atleta. Essa estrutura deve conter o nome do
// atleta, seu esporte, idade e altura. Agora, escreva um programa que leia os dados de
// cinco atletas. Calcule e exiba os nomes do atleta mais alto e do mais velho.

#include<stdio.h>

typedef struct Atleta
{
    char nome[40];
    char esporte[20];
    int idade;
    float altura;
} Atleta;

int main()
{
    int alto, velho; // inicializa as variáveis com zero
    Atleta atleta[5];

    for (int i = 0; i < 5; i++) { // corrige o limite do loop
        printf("Digite o nome do atleta %d: ", i+1);
        fgets(atleta[i].nome, 40, stdin);

        printf("Digite o esporte do atleta %d: ", i+1);
        fgets(atleta[i].esporte, 20, stdin);
        getchar(); // consome o caractere '\n' que ficou no buffer de entrada

        printf("Digite a idade do atleta %d: ", i+1);
        scanf("%d", &atleta[i].idade);

        printf("Digite a altura do atleta %d (Ex: 1.7): ", i+1);
        scanf("%f", &atleta[i].altura);

        // verifica se o atleta atual é mais alto que a pessoa mais alta encontrada até agora
        if (atleta[i].altura > atleta[alto].altura) {
            alto = i;
        }

        // verifica se o atleta atual é mais velho que a pessoa mais velha encontrada até agora
        if (atleta[i].idade > atleta[velho].idade) {
            velho = i;
        }
    }

    printf("O atleta mais velho é: %s\n", atleta[velho].nome);
    printf("O atleta mais alto é: %s\n", atleta[alto].nome);

    return 0;
}