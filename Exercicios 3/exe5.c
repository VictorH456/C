/* Nome: Victor Hugo Souza Costa 
Matricula: 2022010016

5.Faça um programa que leia um número e, caso ele seja positivo, calcule e mostre:
• O número digitado ao quadrado.
• A raiz quadrada do número digitado.*/

#include<stdio.h>
#include<math.h>

int main()
{
    //Definindo.
    float numero;

    printf("Digite um numero "); //Estetica.
    scanf("%f",&numero); //Entrada.

    if (numero>0) //Condicional.
    {
        printf("A raiz quadrada e %5.2f e ao quadrado e %5.2f",sqrt(numero),pow(numero,2)); //Resultado
    }
    else if (numero<0) //Menor que zero
    {
        printf("Ele e negativo"); //Resultado
    }
    else //Zero.
    {
        printf("zero"); //Resultado
    }
    

    return 0;
}

