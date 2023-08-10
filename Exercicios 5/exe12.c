//Nome: Victor Hugo Souza Costa
//Matricula: 2022010016
// 12.Faça um programa que leia um vetor de 10 posições. Verifique se existem valores iguais
//e os escreva na tela.

//Valores? Seriam números e letras ou só números?

#include<stdio.h>

int main()
{
    double vetor[10];
    double vetor2[10] = {0};
    int cont = 0;

    for (int i = 0; i < 10; i++)
    {
        scanf("%lf", &vetor[i]);
    }
    
    for (int i = 0; i < 10; i++)
    {
        for (int j = i+1; j < 10; j++)
        {
            if (vetor[i] == vetor[j])
            {
                vetor2[cont] = vetor[i];
                cont++;
                break;
            }        
        }
    }

    printf("Os valores que se repetem sao: ");
    for (int i = 0; i < cont; i++)
    {
        printf("%.2lf ", vetor2[i]);
    }
    
    return 0;
}