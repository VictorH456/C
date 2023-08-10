/* Nome: Victor Hugo Souza Costa 
Matricula: 2022010016

3.Faça um programa que leia um número inteiro e verifique se esse número é par
ou ímpar.*/

#include<stdio.h>

int main(void)
{
    //Definindo.
    int numero;
    char *valor;
    printf("Digite um numero inteiro: "); //Estetica.
    scanf("%d",&numero); //Entrada.

    if (numero%2 == 0) //Condições caso seja par.
    {
        valor = "par";
    }
    else //Caso não seja par.
    {
        valor = "impar";
    }
    
    printf("O numero %d e %s",numero,valor); //Resultado.

    return 0;
}