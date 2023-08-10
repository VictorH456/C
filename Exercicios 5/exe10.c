//Nome: Victor Hugo Souza Costa
//Matricula: 2022010016
// 10.Faça um programa que preencha um vetor de tamanho 100 com os 100 primeiros
//números naturais que não são múltiplos de 7. Ao final, imprima esse vetor na tela.

#include<stdio.h>
#include<string.h>

//Não funciona
int main()
{
    int vetor[100], cont = 1;

    for (int i = 0; i < 100; i++)
    {
        if (cont%7 != 0)
        {
            vetor[i] = cont;
        }
        else
        {
            i--;
        }
        cont++;
    }

    printf("O vetor e ");
    for (int i = 0; i < 100; i++)
    {
        printf("%d ",vetor[i]);
    }
    

    return 0;
}