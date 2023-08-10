/* Nome: Victor Hugo Souza Costa 
Matricula: 2022010016

6.Leia uma velocidade em km/h (quilômetros por hora) e apresente convertida em
m/s (metros por segundo). A fórmula de conversão é M = K/36, sendo K a
velocidade em km/h e M em m/s.
*/

#include<stdio.h>

int main(void)
{
    //defini as variaveis.
    float velocidade;
    int verificacao;

    printf("Digite a velocidade: "); //estetica.
    scanf("%f",&velocidade); //entrada da velocidade.
    printf("Sua velocidade e em km/h? digite 1 para sim ou 0[nao] ");
    //entrada para verificação se a velocidade é em km/h,senão aceita como m/s. 
    scanf("%d",&verificacao);
    switch (verificacao) //switch para a verificação.
    {
    case 1:
        printf("A velocidade e %5.2f m/s",velocidade/3.6);
        break;
    
    default:
        printf("A velocidade e %5.2f km/h",velocidade*3.6);
        break;
    }
    return 0;
}