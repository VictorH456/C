//Nome: Victor Hugo Souza Costa
//Matricula: 2022010016
// 11.Escreva uma função que receba uma matriz e seu tamanho como parâmetros e salve-a
//em um arquivo texto de nome “matriz.txt”’. Cada linha da matriz deve ser salva em uma
//linha do arquivo.

#include<stdio.h>

void salvarMatrizNoArquivo(int **matriz, int linhas, int colunas) {
    FILE *arquivo = fopen("matriz.txt", "w");
    if (arquivo == NULL) {
    printf("Erro ao criar o arquivo.\n");
    return;
    }
    fprintf(arquivo, "%d %d\n", linhas, colunas);

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            fprintf(arquivo, "%d ", matriz[i][j]);
        }
        fprintf(arquivo, "\n");
    }

    fclose(arquivo);

    printf("Matriz salva no arquivo com sucesso.\n");
}

    int main() {
    int linhas, colunas;
    printf("Digite o numero de linhas da matriz: ");
    scanf("%d", &linhas);

    printf("Digite o numero de colunas da matriz: ");
    scanf("%d", &colunas);

    int **matriz = (int **)malloc(linhas * sizeof(int *));
    for (int i = 0; i < linhas; i++) {
        matriz[i] = (int *)malloc(colunas * sizeof(int));
    }

    printf("Digite os elementos da matriz:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    salvarMatrizNoArquivo(matriz, linhas, colunas);

    // Liberar memória alocada para a matriz
    for (int i = 0; i < linhas; i++) {
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}