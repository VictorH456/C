//Nome: Victor Hugo Souza Costa
//Matricula: 2022010016
// 2.Crie uma estrutura para representar as coordenadas de um ponto no plano (posições X
//e Y). Em seguida, declare e leia do teclado um ponto e exiba a distância dele até a
//origem das coordenadas, isto é, a posição (0,0).
#include<stdio.h>
#include<math.h>
int main()
{
    double distancia;
    struct Coord
    {
        double x;
        double y;
    };
    
    struct Coord pontos;

    printf("Digite duas posicoes x e y (ex: 1 2)");
    scanf("%lf %lf", &pontos.x, &pontos.y);

    distancia = sqrt(pow(pontos.x, 2)+pow(pontos.y, 2)); //formula distancia entre dois pontos

    printf("A distancia entre os pontos e: %.2lf",distancia);
    

    return 0;
}