/* Nome: Victor Hugo Souza Costa 
Matricula: 2022010016

3. Escreva um programa que leia um número inteiro e depois imprima a mensagem
“Valor lido:”, seguido do valor inteiro. Use apenas um comando printf().*/

#include<stdio.h>

int main(void)
{
    int num1;
    printf("Digite um valor qualquer: "); // Apenas apresentativo.
    scanf("%d",&num1); // entrada do numero.
    printf("Valor lido: %d",num1);//Print final.
    return 0;
}
