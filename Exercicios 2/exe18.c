/* Nome: Victor Hugo Souza Costa 
Matricula: 2022010016

18.Elabore um programa que leia dois n�meros inteiros e exiba o deslocamento, a�
esquerda e a� direita, do primeiro n�mero pelo segundo.*/

//Importa��o das bibliotecas.
#include<stdio.h>
#include<locale.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese"); //Para deixar em pt.
        //Definindo as variaveis.
        int num1,num2;
        printf("Digite dois n�meros inteiros: "); //Estetica.
        scanf("%d %d",&num1,&num2); //Entrada dos valores.

        printf("O deslocamento a esquerda fica %d e a direita %d",num1<<num2,num1>>num2); //Resultado.
    return 0;
}