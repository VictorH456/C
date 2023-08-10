//Nome: Victor Hugo Souza Costa 
//Matricula: 2022010016
// 20.Faça um programa que leia um valor inteiro e positivo N, calcule e mostre o valor E, conforme a
//fórmula a seguir: E=1/1!+1/2!+...+1/N!

#include<stdio.h>

int main()
{
    int num, valor = 1;
    double soma; 
    scanf("%d", &num);

    for (int i = 1; i < num; i++)
    {
        for (int j = 1; j < i; j++)
        {
            valor += j;
        }
        
        soma = 1/valor;
    }
    printf("%.2lf",soma);

    return 0;
}