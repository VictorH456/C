//Nome: Victor Hugo Souza Costa
//Matricula: 2022010016
/* 11.Escreva uma função que receba por parâmetros dois valores inteiros x e y e calcule e
retorne o resultado de xy para o programa principal. Não use nenhuma função pronta
para isso
*/

#include<stdio.h>

float potencia(float n, int y)
{
    int resultado = 1;
    if (y < 0)
    {
        y *= -1;
    }
    
    for (int i = 0; i < y; i++)
    {
        resultado = resultado * n;   
    }
    return resultado;
}

int main()
{
    float x, res;
    int y;
    printf("Digite o valor e o expoente(10 2): ");
    scanf("%f %d", &x, &y);

    res = potencia(x, y);

    if (y<0)
    {
        printf("O resultado e: 1/%.2f", res);        
    }
    else
    {
        printf("O resultado e: %.2f", res);
    }
    return 0;
}