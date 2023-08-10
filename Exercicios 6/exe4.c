//Nome: Victor Hugo Souza Costa
//Matricula: 2022010016
// Crie uma estrutura chamada Retângulo. Essa estrutura deverá conter o ponto superior
//esquerdo e o ponto inferior direito do retângulo. Cada ponto é definido por uma
//estrutura Ponto, a qual contém as posições X e Y. Faça um programa que declare e leia
//uma estrutura Retângulo e exiba a área e o comprimento da diagonal e o perímetro
//desse retângulo.

#include <stdio.h>
#include <math.h>

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
    float area, diagonal, perimetro; 

    Retangulo retangulo;

    printf("Digite o ponto superior esquerdo (X Y): ");
    scanf("%f %f", &retangulo.superior_esquerdo.x, &retangulo.superior_esquerdo.y);

    printf("Digite o ponto inferior direito (X Y): ");
    scanf("%f %f", &retangulo.inferior_direito.x, &retangulo.inferior_direito.y);

    area = (retangulo.superior_esquerdo.x - retangulo.inferior_direito.x) * (retangulo.superior_esquerdo.y - retangulo.inferior_direito.y);
    perimetro = 2*(retangulo.superior_esquerdo.x - retangulo.inferior_direito.x + retangulo.superior_esquerdo.y - retangulo.inferior_direito.y);
    diagonal = sqrt(pow(retangulo.superior_esquerdo.x - retangulo.inferior_direito.x, 2) + pow(retangulo.superior_esquerdo.y - retangulo.inferior_direito.y, 2));

    printf("A area desse retangulo: %.2f, perimetro: %.2f e diagonal: %.2f\n", area, perimetro, diagonal);

    return 0;
}