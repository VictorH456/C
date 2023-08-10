//Nome: Victor Hugo Souza Costa
//Matricula: 2022010016
// 15.Faça um programa que leia 100 números. Esse programa deverá, em seguida,
//armazenar esses números em um arquivo binário.

#include <stdio.h>

#define NUM_NUMEROS 100

int main() {
    FILE *arquivo;
    int numeros[NUM_NUMEROS];
    
    // Ler os 100 números do usuário
    printf("Digite os 100 numeros:\n");
    for (int i = 0; i < NUM_NUMEROS; i++) {
        scanf("%d", &numeros[i]);
    }

    // Abrir o arquivo binário para escrita
    arquivo = fopen("numeros.bin", "wb");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    // Escrever os números no arquivo binário
    fwrite(numeros, sizeof(int), NUM_NUMEROS, arquivo);

    // Fechar o arquivo
    fclose(arquivo);
    printf("Numeros armazenados no arquivo 'numeros.bin' com sucesso.\n");
    
    return 0;
}