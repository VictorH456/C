//Nome: Victor Hugo Souza Costa
//Matricula: 2022010016
// 10.Um arquivo texto possui uma matriz de valores inteiros dentro dele. Os dois primeiros
//números são as dimensões da matriz (linhas e colunas), enquanto o restante dos
//números são os valores de cada elemento da matriz. Escreva uma função que receba
//o nome do arquivo e retorne o ponteiro para uma matriz alocada dinamicamente
//contendo os valores lidos do arquivo.

#include <stdio.h>
#include <stdlib.h>

int **lerMatrizDoArquivo(const char *nomeArquivo, int *linhas, int *colunas) {
    FILE *arquivo = fopen(nomeArquivo, "r");
    if (arquivo == NULL) {
    printf("Erro ao abrir o arquivo.\n");
    return NULL;
    }
    fscanf(arquivo, "%d %d", linhas, colunas);

    int **matriz = (int **)malloc(*linhas * sizeof(int *));
    for (int i = 0; i < *linhas; i++) {
        matriz[i] = (int *)malloc(*colunas * sizeof(int));
        for (int j = 0; j < *colunas; j++) {
            fscanf(arquivo, "%d", &matriz[i][j]);
        }
    }

    fclose(arquivo);
    return matriz;
}

int main() {
    char nomeArquivo[FILENAME_MAX];
    int linhas, colunas;
    printf("Digite o nome do arquivo: ");
    scanf("%s", nomeArquivo);

    int **matriz = lerMatrizDoArquivo(nomeArquivo, &linhas, &colunas);
    if (matriz == NULL) {
        return 1;
    }

    printf("Matriz lida do arquivo:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    // Liberar memória alocada para a matriz
    for (int i = 0; i < linhas; i++) {
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}