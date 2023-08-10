/* Nome: Victor Hugo Souza Costa 
Matricula: 2022010016

11.Leia o valor do raio de um círculo. Calcule e imprima a área do círculo
correspondente. A área do círculo é A = π* raio2, sendo π = 3.141592.*/

#include<stdio.h>

//Definindo a constante pi.
const float pi = 3.141592;

int main(void)
{
    float raio; //Definindo a variavel.

    printf("Digite o raio de um circulo: ");
    scanf("%f",&raio); //Entrada de dados.

    printf("A area do circulo e %5.4f",pi*pow(raio,2)); //Mostrando o resultado.

    return 0;
}