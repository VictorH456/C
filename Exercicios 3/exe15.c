/* Nome: Victor Hugo Souza Costa 
Matricula: 2022010016

15.Faça um programa que leia os coeficientes de uma equação do segundo grau.
Em seguida, calcule e mostre as raízes dessa equação, lembrando que as raízes
são calculadas como em que Δ = b2 – 4 * a * c e ax2 + bx + c = 0 representa uma equação do segundo
grau. A variável a tem de ser diferente de zero. Caso seja igual, imprima a mensagem “Não é equação de segundo grau”. Do contrário, imprima:
• Se Δ < 0, não existe real. Imprima a mensagem “Não existe raiz”.
• Se Δ = 0, existe uma raiz real. Imprima a raiz e a mensagem “Raiz única”.
• Se Δ > 0, existem duas raízes reais. Imprima as raízes.*/

#include<stdio.h>
#include<math.h>

int main(void)
{
    //Definindo os coeficientes,delta e raizes.
    float a,b,c,delta,raiz,raiz2;

    printf("Digite os coeficientes da equacao em ordem: ");
    scanf("%f %f %f", &a, &b, &c); //Entradas dos coeficientes.

    delta = b*b-4*a*c; //Calculo do delta.

    if (a == 0) //Condições.
    {
        printf("Nao e uma equacao do segundo grau.");    
    }
    else if (delta<0)
    {
        printf("Nao existe raiz real");
    }
    else if (delta == 0)
    {
        raiz = -b/2*a;
        printf("%.2f Raiz unica",raiz);
    }
    else
    {
        raiz = (-b+sqrt(delta))/2*a;
        raiz2 = (-b-sqrt(delta))/2*a;
        printf("Primeira raiz %.2f, Segunda raiz %.2f", raiz, raiz2);
    }
    
    



    return 0;
}