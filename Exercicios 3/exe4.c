/* Nome: Victor Hugo Souza Costa 
Matricula: 2022010016

4.Faça um programa que leia o salário de um trabalhador e o valor da prestação de um empréstimo. Se a prestação:
• For maior que 20% do salário, imprima: “Empréstimo não concedido.”
• Caso contrário, imprima: “Empréstimo concedido.”*/

#include<stdio.h>

int main(void)
{
    //Definindo variaveis.
    float salario,valor_p;
    printf("Digite o salario seguido pelo valor da prestacao: "); //Estetica.
    scanf("%f %f", &salario, &valor_p); //Entrada.

    if (valor_p>salario*20/100)
    {
        printf("Emprestimo não concedido"); //Resposta.
    }
    else
    {
        printf("Emprestimo concedido"); //Resposta.
    }

    return 0;
}