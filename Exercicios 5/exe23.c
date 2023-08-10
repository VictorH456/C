//Nome: Victor Hugo Souza Costa
//Matricula: 2022010016
// 23.Calcular e imprimir na tela uma matriz de tamanho 10 × 10, em que seus elementos são
//da forma: A[i][j] = {


#include<stdio.h>
#include<math.h>

int main()
{
    int matriz[10][10];
 

    printf("A matriz fica: \n");
    //For para a leitura dos valores
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (i < j)
            {
                matriz[i][j] = 2*i + 7*j - 2;
            }
            else if (i == j)
            {
                matriz[i][j] = 3*i*i - 1;
            }
            else if (i > j)
            {
                matriz[i][j] = 4*pow(i,3) + 5*j*j + 1;
            }
            


            printf("%d ",matriz[i][j]);
        }
        puts(""); //Pula linha.
    }
    
    return 0;
}