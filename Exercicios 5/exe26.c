//Nome: Victor Hugo Souza Costa
//Matricula: 2022010016
// 26.Faça um programa que leia uma matriz de tamanho 5 × 5. Calcule e imprima a soma
//dos elementos dessa matriz que estão acima da diagonal principal.

#include <stdio.h>

int main() {
    double matriz[5][5], soma = 0;

    // leitura dos valores da matriz
    printf("Digite os valores da matriz:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%lf", &matriz[i][j]);
        }
    }

    // soma dos elementos acima da diagonal principal
    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
            soma += matriz[i][j];
        }
    }

    // impressão da soma encontrada
    printf("A soma dos elementos acima da diagonal principal eh: %.2lf\n", soma);

    return 0;
}
