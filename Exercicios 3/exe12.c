/* Nome: Victor Hugo Souza Costa 
Matricula: 2022010016

12.Usando o comando switch, escreva um programa que leia um inteiro entre 1 e 7 e
imprima o dia da semana correspondente a esse número. Isto é, domingo, se 1,
segunda-feira, se 2, e assim por diante.*/

//Criei uma constante chamada semana com todos os dias da semana
const char* semana[8] = {
    "0","Domingo","Segunda","Terca","Quarta"
    "Quinta","Sexta","Sabado"};

#include<stdio.h>

int main()
{
    //Definindo as variaveis.
    int verificar;
    
    printf("Digite um valor de 1 a 7: ");
    scanf("%d",&verificar); //Entrada.

    if (verificar>=1 && verificar<=1) //Condição.
    {
        printf("%s",semana[verificar]); //Primeiramente eu peguei a constante semana e chamei verficar para pegar a posição da semana.
    }
    else
    {
        printf("Voce digitou algo errado");
    }

    return 0;
}