//Nome: Victor Hugo Souza Costa
//Matricula: 2022010016
// 29.Faça um programa que leia uma matriz A de tamanho 5 × 5. Em seguida, calcule e
//imprima a matriz B, sendo que B = A^2

#include <stdio.h>

int main() {
    int matriz[5][5];
    int soma = 0;

    // Leitura da matriz
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            printf("Digite o valor para matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Cálculo da soma dos elementos que não pertencem à diagonal principal nem à diagonal secundária
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            if(i != j && i+j != 4) { // se o elemento não pertence às diagonais
                soma += matriz[i][j];
            }
        }
    }

    // Impressão da soma
    printf("A soma dos elementos que não pertencem à diagonal principal nem à diagonal secundária é: %d\n", soma);

    return 0;
}
