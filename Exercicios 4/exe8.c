//Nome: Victor Hugo Souza Costa 
//Matricula: 2022010016
// 8.Faça um programa que leia 10 inteiros e imprima sua média.
#include<stdio.h>

int main()
{
    int valores[10];
    double resultado = 0; //É necessario receber o resultado em double senão não funciona o print.
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&valores[i]);
        resultado += valores[i];
        fflush(stdin);
    }
    
    printf("%.2lf",resultado/10);
    
    return 0;
}