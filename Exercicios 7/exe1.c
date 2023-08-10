//Nome: Victor Hugo Souza Costa
//Matricula: 2022010016
// 1.Escreva uma função que receba por parâmetro dois números e retorne o maior deles.

#include<stdio.h>

float Maior(float num1,float num2) //Recebe dois valores
{
    
    if (num2 > num1) //Compara os dois
    {
        num1 = num2; //Igualar num1 a num2 se num2 for maior
    }
    return num1; //Retorna o num1
}
int main()
{
    float num1,num2;

    printf("Digite dois valores: ");
    scanf("%f %f", &num1, &num2);

    printf("O maior valor e: %.2f",Maior(num1,num2));

    return 0;
}