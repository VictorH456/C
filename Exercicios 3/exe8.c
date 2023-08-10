/* Nome: Victor Hugo Souza Costa 
Matricula: 2022010016

8.Escreva um programa que, dada a idade de um nadador, classifique-o em uma
das seguintes categorias:*/

#include<stdio.h>

int main(void)
{
    //Difinindo as variaveis.
    int idade;

    printf("Digite sua idade ");
    scanf("%d", &idade); //Entrada.

    if (idade>=5 && idade<=7) //Condição.
    {
        printf("Infantil A");
    }
    else if (idade>=8 && idade<=10)
    {
        printf("Infantil B");
    }
    else if (idade>=11 && idade<=13)
    {
        printf("Juvenil A");
    }
    else if (idade>=14 && idade<=17)
    {
        printf("Juvenil B");
    }
    else if (idade>=18)
    {
        printf("Senior");
    }
    else
    {
        printf("Nao foi digitado uma idade correta");
    }
    return 0;
}
