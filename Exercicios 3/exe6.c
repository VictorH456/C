/* Nome: Victor Hugo Souza Costa 
Matricula: 2022010016

6.Faça um programa que receba a altura e o sexo de uma pessoa e calcule e
mostre seu peso ideal, utilizando as seguintes fórmulas (em que “h” corresponde
à altura):
• Homens: (72,7 * h) – 58
• Mulheres: (62,1 * h) – 44,7*/

#include<stdio.h>
#include<ctype.h>

int main(void)
{
    //Definindo.
    float altura;
    char sexo;

    printf("Digite sua altura e seu sexo "); 
    scanf("%f %c", &altura, &sexo); //Entrada.
    altura = tolower(altura); //diminuir.

    switch (sexo) //Condições.
    {
    case 'h':
        printf("voce e homem e Seu peso ideal e %f",72,7 * altura - 58);
        break;
    
    default:
        printf("voce e mulher e Seu peso ideal e %f",62,1 * altura - 44.7);
        break;
    }

    return 0;
}