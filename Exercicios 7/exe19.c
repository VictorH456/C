//Nome: Victor Hugo Souza Costa
//Matricula: 2022010016
/* 18.Faça uma função que receba como parâmetro o valor de um ângulo em graus e calcule
o valor do cosseno desse ângulo usando a sua respectiva série de Taylor:
em que x é o valor do ângulo em radianos. Considerar π = 3.1414592 e n variando de 0
até 5.*/

#include<stdio.h>
#include<math.h>

const float pi = 3.1414592;

int fat(int num) // fatorial
{
    int res = 1;
    for (int i = 1; i <= num; i++)
    {
       res *= i;
    }
    return res;
}


float angulos(float rad) // função para a formulo do Cosx
{
    float soma = 0;

    for (int i = 0; i < 5; i++)
    {
        soma += (pow((-1),i)/fat((2*i)))*pow(rad,2*i);//A formula
    }
    
    return soma;
}

int main()
{
    int angulo;
    float res;
    printf("Digite o angulo em radianos: ");
    scanf("%d", &angulo);

    res = angulos(angulo);

    printf("O valor Cos x = %.2f",res);

    return 0;
}