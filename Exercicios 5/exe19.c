//Nome: Victor Hugo Souza Costa
//Matricula: 2022010016
// 19.Leia uma matriz de tamanho 4 × 4. Em seguida, conte e escreva na tela quantos valores
//maiores do que 10 ela possui.

#include<stdio.h>

int main()
{
    double matriz[4][4], qtd = 0;
 

    //For para a leitura dos valores
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%lf",&matriz[i][j]);
            if (matriz[i][j] > 10)
            {
                qtd ++;
            }
            
            
        }
        
    }
    
    printf("A quantidade: %.0lf",qtd);
    return 0;
}