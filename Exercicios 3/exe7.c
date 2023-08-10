/* Nome: Victor Hugo Souza Costa 
Matricula: 2022010016

7.Uma empresa vende o mesmo produto para quatro diferentes estados. Cada
estado possui uma taxa diferente de imposto sobre o produto. Faça um programa
em que o usuário entre com o valor e o estado de destino do produto e o
programa retorne o preço final do produto acrescido do imposto do estado em
que ele será vendido. Se o estado digitado não for válido, mostrará uma mensagem de erro.*/

#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(void)
{
    //Definindo as variaveis.
    float valor;
    char estado[2];

    printf("Digite o valor e o estado "); 
    scanf("%f %s", &valor, estado); //Entrada dupla.
    estado[0] = toupper(estado[0]); // Tranformando a string em maiuscula.
    estado[1] = toupper(estado[1]);

    if (strcmp(estado,"MG")==0) //Condições.
    {
        printf("O valor fica %5.2f",valor+valor*7/100);
    }
    else if (strcmp(estado,"MS")==0)
    {
        printf("O valor fica %5.2f",valor+valor*8/100);
    }
    else if (strcmp(estado,"SP")==0)
    {
        printf("O valor fica %5.2f",valor+valor*12/100);
    }
    else if (strcmp(estado,"RJ")==0)
    {
        printf("O valor fica %5.2f",valor+valor*15/100);
    }
    else
    {
        printf("O valor digitado nao e valido");
    }
    


    return 0;
}