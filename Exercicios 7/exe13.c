//Nome: Victor Hugo Souza Costa
//Matricula: 2022010016
// 12.Escreva uma função que receba um número inteiro positivo n. Calcule e retorne o
//somatório de 1 até n: 1 + 2 + 3 + ... + n.

#include<stdio.h>

void somatorio(int num)
{
    int res = 0;

    for (int i = 1; i < num; i++)
    {
        printf("%d+",i);
        res +=i;
    }
    printf("%d = %d", num, res + num);

}

int main()
{
    int num; 
    printf("Digite um numero inteiro: ");
    scanf("%d",&num);

    somatorio(num);

    return 0;
}