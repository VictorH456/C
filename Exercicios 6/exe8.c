//Nome: Victor Hugo Souza Costa
//Matricula: 2022010016
// 8.Crie uma estrutura capaz de armazenar o nome e a data de nascimento de uma
//pessoa. Agora, escreva um programa que leia os dados de seis pessoas. Calcule e
//exiba os nomes da pessoa mais nova e da mais velha.

#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[40];
    int data_nasc[3];
} Pessoa;

int main() {
    Pessoa dados[6];
    int mais_novo = 0, mais_velho = 0;

    for (int i = 0; i < 6; i++) {
        printf("Digite o nome da pessoa %d: ", i+1);
        fgets(dados[i].nome, 40, stdin);

        printf("Digite a data de nascimento da pessoa %d (dd/mm/aaaa): ", i+1);
        scanf("%d/%d/%d", &dados[i].data_nasc[0], &dados[i].data_nasc[1], &dados[i].data_nasc[2]);
        getchar(); // consome o caractere '\n' que ficou no buffer de entrada

        // verifica se a pessoa atual é mais nova que a pessoa mais nova encontrada até agora
        if (dados[i].data_nasc[2] < dados[mais_novo].data_nasc[2] ||
            (dados[i].data_nasc[2] == dados[mais_novo].data_nasc[2] &&
             dados[i].data_nasc[1] < dados[mais_novo].data_nasc[1]) ||
            (dados[i].data_nasc[2] == dados[mais_novo].data_nasc[2] &&
             dados[i].data_nasc[1] == dados[mais_novo].data_nasc[1] &&
             dados[i].data_nasc[0] < dados[mais_novo].data_nasc[0])) {
            mais_novo = i;
        }

        // verifica se a pessoa atual é mais velha que a pessoa mais velha encontrada até agora
        if (dados[i].data_nasc[2] > dados[mais_velho].data_nasc[2] ||
            (dados[i].data_nasc[2] == dados[mais_velho].data_nasc[2] &&
             dados[i].data_nasc[1] > dados[mais_velho].data_nasc[1]) ||
            (dados[i].data_nasc[2] == dados[mais_velho].data_nasc[2] &&
             dados[i].data_nasc[1] == dados[mais_velho].data_nasc[1] &&
             dados[i].data_nasc[0] > dados[mais_velho].data_nasc[0])) {
            mais_velho = i;
        }
    }

    printf("A pessoa mais nova e': %s\n", dados[mais_novo].nome);
    printf("A pessoa mais velha e': %s\n", dados[mais_velho].nome);

    return 0;
}
