/* Nome: Victor Hugo Souza Costa 
Matricula: 2022010016

10.Elabore um programa que solicite ao usuário entrar com o valor do dia, mês e ano
(inteiros). Em seguida, imprima os valores lidos separados por uma barra (\).
*/
#include<stdio.h>

int main()
{
    int dia, mes, ano;
    printf("Digite o dia, mês e ano(apenas com um espaco separando): "); //Apenas apresentativo.
    scanf("%d %d %d",&dia,&mes,&ano); // Entrada dos valores.
    printf("%d\\%d\\%d",dia,mes,ano); //Print final, mostrando o resultado.
    return 0;
}