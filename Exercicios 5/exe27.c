//Nome: Victor Hugo Souza Costa
//Matricula: 2022010016
// 27.Faça um programa que leia uma matriz de tamanho 6 × 6. Calcule e imprima a soma
//dos elementos dessa matriz que estão abaixo da diagonal principal.
#include <stdio.h>

int main() {
    int matriz[6][6], soma = 0;

    // Leitura da matriz
    for(int i = 0; i < 6; i++) {
        for(int j = 0; j < 6; j++) {
            printf("Digite o valor para matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Cálculo da soma dos elementos abaixo da diagonal principal
    for(int i = 1; i < 6; i++) { // começamos em 1 para não incluir a diagonal principal
        for(int j = 0; j < i; j++) {
            soma += matriz[i][j];
        }
    }

    // Impressão da soma
    printf("A soma dos elementos abaixo da diagonal principal é: %d\n", soma);

    return 0;
}
