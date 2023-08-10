//Nome: Victor Hugo Souza Costa
//Matricula: 2022010016
//17. Faça um programa que leia uma matriz de tamanho 4 × 4. Imprima na tela o maior valor
//contido nessa matriz e a sua localização (linha e coluna).


#include<stdio.h>

int main()
{
    double matriz[4][4], maior, coluna, linha;
 

    //For para a leitura dos valores
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%lf",&matriz[i][j]);
            if (i == 0 && j == 0)
            {
                coluna = j;
                linha = i;
                maior = matriz[i][j];
            }
             
            if (maior < matriz[i][j])
            {
                coluna = j;
                linha = i;
                maior = matriz[i][j];
            }
            
        }
        
    }
    
    printf("O maior numero do vetor: %.2lf e a linha e %.0lf e a coluna %.0lf", maior, linha, coluna);
    return 0;
}