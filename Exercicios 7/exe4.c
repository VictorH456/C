//Nome: Victor Hugo Souza Costa
//Matricula: 2022010016
// 4.Escreva uma função que receba por parâmetro a altura e o raio de um cilindro circular
//e retorne o volume desse cilindro. O volume de um cilindro circular é calculado por
//meio da seguinte fórmula: em que π = 3.1414592

#include<stdio.h>
const float pi = 3.1414592;
void Volume(float r,float alt)
{
    printf("O vlome e: %.2f",pi*r*r*alt);
}

int main()
{
    float r,alt;
    printf("Digite o raio e a altura(ex: r alt)");
    scanf("%f %f",&r,&alt);

    Volume(r,alt);

    return 0;
}