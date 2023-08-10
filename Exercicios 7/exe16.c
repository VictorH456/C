//Nome: Victor Hugo Souza Costa
//Matricula: 2022010016
/* 16.Elabore uma função que receba como parâmetro um
valor inteiro n e gere como saída n linhas com pontos
de exclamação, conforme o exemplo a seguir, em que
usamos n = 5:*/

#include<stdio.h>

void linhas(int num)
{
    char excla = '!';
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%c",excla);
        }
        printf("\n");
    }
    
}

int main()
{
    int num;
    printf("Digite um numero inteiro: ");
    scanf("%d",&num);

    linhas(num);

    return 0;
}