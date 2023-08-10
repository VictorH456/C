/* Nome: Victor Hugo Souza Costa 
Matricula: 2022010016

8.Faça um programa que leia dois números inteiros e depois os imprima na ordem
inversa em que eles foram lidos.
*/

#include<stdio.h>

int main()
{
    int num1,num2;
    
    printf("Digite dois numeros: "); //Apenas apresentativo.
    scanf("%d %d",&num1 ,&num2); // Entrada dupla.
    printf("Os valores sao: %d e %d",num2,num1); //Print final, mostrando o resultado.
    return 0;
}