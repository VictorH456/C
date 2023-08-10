/* Nome: Victor Hugo Souza Costa 
Matricula: 2022010016

5.Faça um programa que calcule o ano de nascimento de uma pessoa a partir de
sua idade e do ano atual.*/

#include<stdio.h>
#include <windows.h> //Biblioteca para pegar o ano local do windows

int main()
{
    //Definindo as variaveis 
    SYSTEMTIME str_t;
        GetSystemTime(&str_t);
    int anoAtual = str_t.wYear;
    char sim_or_no;
    int idade;
    
    printf("Digite sua idade: "); //Estetica.
    scanf("%d",&idade); //Entrada dos valores
    
    //comando para limpar o buffer para poder receber a proxima entrada
    fflush(stdin);

    printf("Voce ja fez aniversario?s or n "); //Estetica
    scanf("%c",&sim_or_no); //entrada da resposta

    switch (sim_or_no) //switch/if para a verificação da resposta 
    {
    case 's': //caso seja s
        //print mostrando o ano de nascimento. 
        printf("Voce nasceu em: %d",anoAtual-idade); 
        break;
    
    case 'n': //caso seja n
        //print mostrando o ano de nascimento. 
        printf("Voce nasceu em: %d",anoAtual-idade-1);
        break;
    default:
        //print mostrando o ano de nascimento caso a pessoa não digite. 
        printf("voce digitou algo errado, vou considerar sim.\nVoce nasceu em: %d",anoAtual-idade);
        break;
    }
    return 0;
}