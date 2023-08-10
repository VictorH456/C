//Nome: Victor Hugo Souza Costa
//Matricula: 2022010016
// 1.Implemente um programa que leia o nome, a idade e o endereço de uma pessoa e
//armazene esses dados em uma estrutura. Em seguida, imprima na tela os dados da
//estrutura lida.
#include<stdio.h>

int main()
{
    struct Dados
    {
        char nome[40];
        int idade;
        char ender[20];
    };
    
    struct Dados pessoa;
    
    printf("Digite o seu nome: ");
    fgets(pessoa.nome, 40, stdin);

    printf("Digite a sua idade: ");
    scanf("%d", &pessoa.idade);
    fflush(stdin);
    printf("Digite o seu Endereco: ");
    fgets(pessoa.ender, 40, stdin);

    printf("Os dados digitados foram: \nNome: %sIdade: %d\nEndereco: %s", pessoa.nome, pessoa.idade, pessoa.ender);

    return 0;
}