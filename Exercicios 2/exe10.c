/* Nome: Victor Hugo Souza Costa 
Matricula: 2022010016

10. A importância de R$ 780.000,00 será dividida entre três ganhadores de um
concurso, sendo que:
i. O primeiro ganhador receberá 46% do total.
ii. O segundo receberá 32% do total.
iii. O terceiro receberá o restante.
Calcule e imprima a quantia recebida por cada um dos ganhadores.*/

#include<stdio.h>

int main(void)
{
    //Definindo as variaveis.
    float valor_total = 780000, ganhador_1, ganhador_2, ganhador_3;
    //Calculando.
    ganhador_1 = 0.46*valor_total, ganhador_2 = 0.32*valor_total, ganhador_3 = valor_total-ganhador_2-ganhador_1;
    //Mostrando o resultado.
    printf("O primeiro recebeu %5.2f, o segundo %5.2f e o terceiro %5.2f", ganhador_1, ganhador_2, ganhador_3);

    return 0;
}