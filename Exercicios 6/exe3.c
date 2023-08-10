//Nome: Victor Hugo Souza Costa
//Matricula: 2022010016
// 3.Crie uma estrutura para representar as coordenadas de um ponto no plano (posições X
//e Y). Em seguida, declare e leia do teclado dois pontos e exiba a distância entre eles.
#include<stdio.h>
#include<math.h>

int main()
{
    double distancia, x2, y2;
    struct Coord
    {
        double x;
        double y;
    };

    struct Coord pontos;

    printf("Digite duas posicoes x e y (ex: 1 2)");
    scanf("%lf %lf", &pontos.x, &pontos.y);

    printf("Digite duas posicoes x2 e y2 (ex: 1 2)");
    scanf("%lf %lf", &x2, &y2);

    distancia = sqrt(pow(pontos.x - x2, 2)+pow(pontos.y - y2, 2)); //formula distancia entre dois pontos

    printf("A distancia entre os pontos e: %.2lf",distancia);
    


    return 0;
}