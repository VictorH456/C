/* Nome: Victor Hugo Souza Costa 
Matricula: 2022010016

15.Escreva um programa que leia três variáveis: char, int e float. Em seguida,
imprima-as de três maneiras diferentes: separadas por espaços, por uma
tabulação horizontal e uma em cada linha. Use um único comando printf()
para cada operação de escrita das três variáveis.
*/

#include<stdio.h>

int main()
{
    //Declarando as variaveis char/str, int e float.
    char str; 
    int num1;
    float num2;

    printf("Digite o caractere, o numero inteiro e decimal separado por um espaco: "); //Apenas apresentativo.
    scanf("%c %d %f", &str, &num1, &num2); //Entrada dos valores, char, int e float respectivamente.
    printf("    %c \t%d \n%f", str, num1, num2); //Print final mostrando os resultados.
    return 0;
}