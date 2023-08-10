/* Nome: Victor Hugo Souza Costa 
Matricula: 2022010016

11.Faça um programa que informe o mês de acordo com o número digitado pelo
usuário. Exemplo: Entrada = 4. Saída = Abril.*/

#include<stdio.h>
//Peguei uma constante da internet com os 12 meses.
const char* _mes[13] =
    { "0","Janeiro", "Fevereiro", "Marco", "Abril",
        "Maio", "Junho", "Julho", "Agosto",
        "Setembro", "Outubro", "Novembro", "Dezembro"
    };
int main()
{
    //Definindo as variaveis
    int verificar;
    
    printf("Digite um numero de 1 a 12: ");
    scanf("%d", &verificar);//Entrada dos valores.
    
    if (verificar>=1 && verificar<=12)
    {
        printf("%s",_mes[verificar]);
    }
    else
    {
        printf("Voce digitou errado");
    }
    
    return 0;
}