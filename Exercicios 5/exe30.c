//Nome: Victor Hugo Souza Costa
//Matricula: 2022010016
// 30.Faça um programa que leia uma matriz de tamanho 5 × 5. Calcule a soma dos
//elementos dessa matriz que pertencem à diagonal principal ou secundária. Calcule
//também a soma dos elementos que não pertencem a nenhuma das duas diagonais.
//Imprima na tela a diferença entre os dois valores.
#include <stdio.h>

int main() {
    int matriz[5][5], somaDiagonais = 0, somaNaoDiagonais = 0;

    // Leitura da matriz
    printf("Digite os elementos da matriz:\n");
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            printf("Digite o valor para matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Cálculo da soma dos elementos das diagonais principal e secundária
    for(int i = 0; i < 5; i++) {
        somaDiagonais += matriz[i][i]; // soma os elementos da diagonal principal
        somaDiagonais += matriz[i][4-i]; // soma os elementos da diagonal secundária
    }

    // Cálculo da soma dos elementos que não pertencem a nenhuma das diagonais
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            if(i != j && i != 4-j) { // verifica se o elemento não pertence a nenhuma das diagonais
                somaNaoDiagonais += matriz[i][j];
            }
        }
    }

    // Impressão da diferença entre as duas somas
    printf("Diferenca entre a soma dos elementos da diagonal principal ou secundaria e a soma dos elementos que nao pertencem a nenhuma das diagonais: %d", somaDiagonais - somaNaoDiagonais);

    return 0;
}
