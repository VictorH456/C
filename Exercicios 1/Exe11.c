/* Nome: Victor Hugo Souza Costa 
Matricula: 2022010016

11.Elabore um programa que contenha uma constante qualquer do tipo float. Use o
comando #define. Imprima essa constante.
*/

#include<stdio.h>

#define NUM 32.9; // Criação de uma constante: #define <nome> <valor>.

int main()
{
    float num = NUM; //Variavel que recebe a constante predefinida. Pois deu erro ao printar direto.
    printf("Válor: %f",num);  //Print final, mostrando o resultado.
    return 0;
}