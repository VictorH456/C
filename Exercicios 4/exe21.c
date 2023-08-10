//Nome: Victor Hugo Souza Costa 
//Matricula: 2022010016
//21.Escreva um programa que leia certa quantidade de números, imprima o maior deles e quantas
// vezes o maior número foi lido. A quantidade de números a serem lidos deve ser fornecida pelo
// usuário.


#include<stdio.h>
#include<string.h>

int main()
{
    int quantidade;
    double maior, valor;

    printf("Digite a quantidade de numeros a serem lidos: ");
    scanf("%d",&quantidade);
    fflush(stdin);

    int valores[quantidade];

    scanf("%lf",&valor);
    valores[0] = valor;
    maior = valor;
 
    for (int i = 1; i < quantidade; i++)
    {
        scanf("%lf",&valor);
        valores[i] = valor;
        if (valor>maior)
        {
            maior = valor;
        }}
    valor = 0;
    for (int i = 0; i < quantidade; i++)
    {
        if (maior == valores[i])
        {
            valor ++;
        }}
    printf("A quantidade de valores e %.0lf",valor);
    

    return 0;
}