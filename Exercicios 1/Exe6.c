/* Nome: Victor Hugo Souza Costa 
Matricula: 2022010016

6.Faça um programa que leia um valor do tipo double e depois o imprima na forma
de notação científica.
*/

#include<stdio.h>

int main(void)
{
    double num;
    printf("Digite um valor decimal: "); //Apenas apresentativo.
    scanf("%e",&num); //Entrada simples.
    printf("Olha o resultado: %e",num); //Print final, mostrando o resultado.
    return 0;
}