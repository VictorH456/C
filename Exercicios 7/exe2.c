//Nome: Victor Hugo Souza Costa
//Matricula: 2022010016
// 2.Faça uma função que receba um número inteiro de 1 a 12 e imprima em tela o mês e a
//sua quantidade de dias de acordo com o número digitado pelo usuário. Exemplo:
//Entrada = 4. Saída = abril.

#include<stdio.h>

const char* _mes[13] =
    { "0","Janeiro", "Fevereiro", "Marco", "Abril",
        "Maio", "Junho", "Julho", "Agosto",
        "Setembro", "Outubro", "Novembro", "Dezembro"};

void Mes(int mes)
{
    printf("O mes digitado e: %s",_mes[mes]);
}

int main()
{
    int num1;
    printf("Digite um numero de 1 a 12: ");
    scanf("%d",&num1);
    if (num1>0 && num1<13)
    {
        Mes(num1);
    }
    else{printf("NUmero invalido");}
    
    return 0;
}