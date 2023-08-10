//Nome: Victor Hugo Souza Costa
//Matricula: 2022010016
/* 17.Elabore uma função que receba como parâmetro um
valor inteiro n e gere como saída um triângulo lateral
formado por asteriscos conforme o exemplo a seguir,
em que usamos n = 4:*/

#include <stdio.h>

void triangulo(int num)
{
    char ast = '*';

    // Parte crescente
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%c", ast);
        }
        printf("\n");
    }

    // Parte decrescente
    for (int i = num - 1; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%c", ast);
        }
        printf("\n");
    }
}

int main()
{
    int num;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    triangulo(num);

    return 0;
}
