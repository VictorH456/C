//Nome: Victor Hugo Souza Costa
//Matricula: 2022010016
/* 5.Escreva uma função para o cálculo do volume de uma esfera volume = 4/3*pi*r^3
em que π = 3.1414592 valor do raio r deve ser passado por parâmetro.*/
#include<stdio.h>
#include<math.h>

//Primeiro eu criei uma função pi
const float pi = 3.1414592;

void Volume(float r,double volume)// Criei a função volume
{
    float divisao = 1.333333333333; // 4/3 quando eu coloquei direto no volume estava dando errado, provavelmente tava pegando a divisão inteira.
    scanf("%f",&r);
    volume = divisao*pi*pow(r,3);//defini o valor volume com a formula dada
    printf("O volume e: %.2f",volume); //printei o volume
}

int main()
{
    /*tem varias formas de fazer, mas eu tentei 
    fazer sem que houvesse a neccessidade de dar o valor antes
    */
    Volume(0,0);
    return 0;
}