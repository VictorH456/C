//Nome: Victor Hugo Souza Costa 
//Matricula: 2022010016
// 7.Elabore um programa que peça ao usuário para digitar 10 valores. Some esses valores e apresente
//o resultado na tela.


#include<stdio.h>
#include<string.h>

int main()
{
    double valores[10], resultado = 0;
    for (int i = 0; i < 10; i++)
    {
        scanf("%lf",&valores[i]);
        resultado += valores[i];
        fflush(stdin);
    }
    
    printf("%.2lf",resultado);
    
    return 0;
}