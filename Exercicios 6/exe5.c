//Nome: Victor Hugo Souza Costa
//Matricula: 2022010016
// 5.Usando a estrutura Retângulo do exercício anterior, faça um programa que declare e
//leia uma estrutura Retângulo e um Ponto, e informe se esse ponto está ou não dentro
//do retângulo.

#include <stdio.h>


typedef struct Ponto
{
    float x;
    float y;
} Ponto;

typedef struct Retangulo
{
    Ponto superior_esquerdo;
    Ponto inferior_direito;
} Retangulo;

int main()
{ 
    float ponto[2];
    Retangulo retangulo;

    printf("Digite o ponto superior esquerdo do retangulo (X Y): ");
    scanf("%f %f", &retangulo.superior_esquerdo.x, &retangulo.superior_esquerdo.y);

    printf("Digite o ponto inferior direito do retangulo (X Y): ");
    scanf("%f %f", &retangulo.inferior_direito.x, &retangulo.inferior_direito.y);
    
    printf("Digite o ponto (X Y): ");
    scanf("%f %f",&ponto[0],&ponto[1]);

    if ((ponto[0] > retangulo.inferior_direito.x && ponto [0] < retangulo.superior_esquerdo.x) && (ponto[1] > retangulo.inferior_direito.y && ponto[1] < retangulo.superior_esquerdo.y))
    {
        printf("O ponto se encontra dentro do retangulo");
    }
    else
    {
        printf("O ponto se encontra na linha ou fora do triangulo");
    }
    return 0;
}