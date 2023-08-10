//Nome: Victor Hugo Souza Costa
//Matricula: 2022010016
/* 20.Faça uma função que calcule e retorne o número neperiano e, e = 2,71828183, usando
a série a seguir:
A função deve ter como parâmetro o número de termos que serão somados, N. Note
que quanto maior esse número, mais próxima do valor e estará a resposta.
*/
#include<stdio.h>

int fat(int num) // fatorial
{
    int res = 1;
    for (int i = 1; i <= num; i++)
    {
       res *= i;
    }
    return res;
}

double e(int n)// função do numero neperiano
{
    double valor = 0;

    for (int i = 0; i < n; i++)
    {
        valor += (1.0/fat(i));
    }
    return valor;
}

int main()
{
    int n;
    double res;
    printf("Digite um valor inteiro: ");
    scanf("%d",&n);

    res = e(n);

    printf("E = %lf",res);

    return 0;
}