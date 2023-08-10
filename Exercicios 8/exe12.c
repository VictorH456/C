//Nome: Victor Hugo Souza Costa
//Matricula: 2022010016
// 12.Escreva uma função que receba um vetor e seu tamanho como parâmetros e salve-a
//em um arquivo texto de nome “vetor.txt”. Cada valor do vetor deve ser salvo em uma
//linha do arquivo.

#include<stdio.h>

void salvarVetorNoArquivo(int *vetor, int tamanho) {
    FILE *arquivo = fopen("vetor.txt", "w");
    if (arquivo == NULL) {
    printf("Erro ao criar o arquivo.\n");
    return;
    }
    for (int i = 0; i < tamanho; i++) {
        fprintf(arquivo, "%d\n", vetor[i]);
    }

    fclose(arquivo);

    printf("Vetor salvo no arquivo com sucesso.\n");
}
int main() {
    int tamanho;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int *vetor = (int *)malloc(tamanho * sizeof(int));

    printf("Digite os elementos do vetor:\n");
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &vetor[i]);
    }

    salvarVetorNoArquivo(vetor, tamanho);

    free(vetor);

    return 0;

}