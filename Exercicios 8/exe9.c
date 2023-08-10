//Nome: Victor Hugo Souza Costa
//Matricula: 2022010016
// 9.Dado um arquivo contendo um conjunto de nomes e datas de nascimento (dia, mês e
//ano, isto é, três inteiros seguidos), escrever um programa que leia esse arquivo e a data
//atual e gere outro arquivo contendo o nome e a idade.

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

typedef struct {
    int dia;
    int mes;
    int ano;
} Data;

    typedef struct {
    char nome[100];
    Data dataNascimento;
} Pessoa;

int calcularIdade(Data dataNascimento, Data dataAtual) {
    int idade = dataAtual.ano - dataNascimento.ano;
    if (dataAtual.mes < dataNascimento.mes || (dataAtual.mes == dataNascimento.mes && dataAtual.dia < dataNascimento.dia)) {
        idade--;
    }
    return idade;
}

int main() {
    FILE *fpEntrada, *fpSaida;
    char nomeArquivoEntrada[FILENAME_MAX], nomeArquivoSaida[FILENAME_MAX];
    Data dataAtual;
    
    printf("Digite o nome do arquivo de entrada: ");
    scanf("%s", nomeArquivoEntrada);

    printf("Digite o nome do arquivo de saída: ");
    scanf("%s", nomeArquivoSaida);

    printf("Digite a data atual (dia mes ano): ");
    scanf("%d %d %d", &dataAtual.dia, &dataAtual.mes, &dataAtual.ano);

    fpEntrada = fopen(nomeArquivoEntrada, "r");
    if (fpEntrada == NULL) {
        printf("Erro ao abrir o arquivo de entrada.\n");
        return 1;
    }

    fpSaida = fopen(nomeArquivoSaida, "w");
    if (fpSaida == NULL) {
        printf("Erro ao abrir o arquivo de saída.\n");
        return 1;
    }

    while (!feof(fpEntrada)) {
        Pessoa pessoa;
        fscanf(fpEntrada, "%s %d %d %d", pessoa.nome, &pessoa.dataNascimento.dia, &pessoa.dataNascimento.mes, &pessoa.dataNascimento.ano);

        int idade = calcularIdade(pessoa.dataNascimento, dataAtual);

        fprintf(fpSaida, "%s %d\n", pessoa.nome, idade);
    }

    fclose(fpEntrada);
    fclose(fpSaida);

return 0;
}