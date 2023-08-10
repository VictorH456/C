/* Nome: Victor Hugo Souza Costa 
Matricula: 2022010016

13.Sejam a e b os catetos de um triângulo cuja hipotenusa h é obtida pela equação:
Faça um programa que leia os valores de a e b, e calcule o valor da hipotenusa
através da fórmula dada. Imprima o resultado.*/

//importando as bibliotecas.
#include<stdio.h>
#include<math.h>

int main(void)
{
    //Deefinindo as variaveis.
    float cateto_a,cateto_b;

    printf("Digite os cateto separados por espacos: "); //Estetica.
    scanf("%f %f", &cateto_a, &cateto_b); //Entrada dos valores.

    printf("A hipotenusa e: %5.2f",sqrt(cateto_a*cateto_a + cateto_b*cateto_b)); //Resultado.

    return 0;
}