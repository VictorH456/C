/* Nome: Victor Hugo Souza Costa 
Matricula: 2022010016

9.Faça um programa que leia dois valores do tipo float. Use um único comando de
leitura para isso. Em seguida, imprima os valores lidos na ordem inversa em que
eles foram lidos.*/

#include<stdio.h>

int main()
{
    float num1,num2;
    printf("Digite dois valores: "); //Apenas apresentativo.
    scanf("%f %f",&num1,&num2); // Entrada dupla.
    printf("Os valores sao: %5.1f e %5.1f.",num2,num1);  //Print final, mostrando o resultado.
    return 0;
}