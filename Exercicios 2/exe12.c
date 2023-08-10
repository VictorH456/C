/* Nome: Victor Hugo Souza Costa 
Matricula: 2022010016

12.Leia a altura e o raio de um cilindro circular e imprima o volume desse cilindro. O
volume de um cilindro circular é calculado por meio da seguinte fórmula:*/

#include<stdio.h>

//Definindo a constante pi.
const float pi = 3.141592;

int main(void)
{
    //Definindo as variaveis.
    int raio, altura;

    printf("Digite o raio seguido pela altura: "); //Estetica
    scanf("%f %f", &raio, &altura); //Entrada dos valores

    printf("O volume e : %f",pi*raio*raio*altura); //Resultado.

    return 0;
}