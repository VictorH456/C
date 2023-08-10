//Nome: Victor Hugo Souza Costa
//Matricula: 2022010016
// 14.Crie uma enumeração representando os itens de uma lista de compras. Agora, escreva
//um programa que leia um valor inteiro do teclado e exiba o nome do item comprado e
//o seu preço.

#include<stdio.h>

enum Compras{Arroz = 1,Feijao, Banana, Coca}compras;

int main()
{
    float carrinho[4] = {5.99,4.20,5.25,3.50};

    printf("Digite Um valor inteiro de 1 a 4 ");
    scanf("%d",&compras);

    switch (compras)
    {
    case Arroz:
        printf("O produto e: Arroz e seu valor %.2f",carrinho[0]);
        break;
    case Feijao:
        printf("O produto e: Feijao e seu valor %.2f",carrinho[1]);
        break;
    case Banana:
        printf("O produto e: Banana e seu valor %.2f",carrinho[2]);
        break;
    case Coca:
        printf("O produto e: Coca e seu valor %.2f",carrinho[3]);
        break;
    default:
        printf("Digito incorreto.");
        break;
    }
    return 0;
}