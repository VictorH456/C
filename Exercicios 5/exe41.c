//Nome: Victor Hugo Souza Costa
//Matricula: 2022010016
//41.Escreva um programa que leia o nome e o valor de determinada mercadoria de uma
//loja. Sabendo que o desconto para pagamento à vista é de 10% sobre o valor total,
//calcule o valor a ser pago à vista. Escreva o nome da mercadoria, o valor total, o valor
//do desconto e o valor a ser pago à vista.

#include <stdio.h>

int main()
{
    char nome[100]; // cria uma variável para armazenar o nome da mercadoria
    float valor; // cria uma variável para armazenar o valor da mercadoria
    float desconto; // cria uma variável para armazenar o valor do desconto
    float avista; // cria uma variável para armazenar o valor a ser pago à vista
    
    printf("Digite o nome da mercadoria: "); // pede ao usuário para digitar o nome da mercadoria
    scanf("%s", nome); // lê o nome da mercadoria do teclado e armazena na variável
    
    printf("Digite o valor da mercadoria: "); // pede ao usuário para digitar o valor da mercadoria
    scanf("%f", &valor); // lê o valor da mercadoria do teclado e armazena na variável
    
    desconto = valor * 0.1; // calcula o valor do desconto como 10% do valor da mercadoria
    avista = valor - desconto; // calcula o valor a ser pago à vista como a diferença entre o valor da mercadoria e o valor do desconto
    
    printf("Nome da mercadoria: %s\n", nome); // imprime o nome da mercadoria
    
    printf("Valor total: R$ %.2f\n", valor); // imprime o valor total com duas casas decimais

    printf("Valor do desconto: R$ %.2f\n", desconto); // imprime o valor do desconto com duas casas decimais
    
    printf("Valor a ser pago a vista: R$ %.2f\n", avista); // imprime o valor a ser pago à vista com duas casas decimais
    
    return 0;
}
