//Nome: Victor Hugo Souza Costa
//Matricula: 2022010016
// 16.Faça um programa que leia uma matriz de tamanho 3 × 3. Imprima na tela o menor
//valor contido nessa matriz.

#include<stdio.h>

int main()
{
    double matriz[3][3], menor;


    //For para a leitura dos valores
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%lf",&matriz[i][j]);
            if (i == 0 && j == 0)
            {
                menor = matriz[i][j];
            }
             
            if (menor > matriz[i][j])
            {
                menor = matriz[i][j];
            }
            
        }
        
    }
    
    printf("O menor numero do vetor: %lf",menor);
    return 0;
}