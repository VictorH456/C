//Nome: Victor Hugo Souza Costa
//Matricula: 2022010016
/* 6.Escreva uma função que receba o peso (quilos) e a altura (metros) de uma pessoa.
Calcule e retorne o IMC (Índice de Massa Corporal) dessa pessoa:
IMC=peso/(altura*altura).
*/

#include<stdio.h>

float IMC(float peso,float altura)
{
    float imc;
    imc = peso/(altura*altura);
    return imc;
}
int main()
{
    float altura,peso;
    
    printf("Digite dois valores(peso altura)");
    scanf("%f %f", &peso, &altura);

    printf("O seu imc e: %.2f",IMC(peso, altura));

    return 0;
}