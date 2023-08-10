//Nome: Victor Hugo Souza Costa
//Matricula: 2022010016
/* 9.Elabore uma função que receba três notas de um aluno como parâmetros e uma letra.
Se a letra for “A”, a função deverá calcular a média aritmética das notas do aluno; se for
“P”, deverá calcular a média ponderada, com pesos 5, 3 e 2. Retorne a média calculada
para o programa principal.
*/

#include<stdio.h>
#include<ctype.h>

float Media(float nt1,float nt2,float nt3)
{
    char lt;
    printf("Digite a letra A ou P: ");
    scanf(" %c",&lt);
    lt = toupper(lt);
    if (lt == 'A')
    {
        return (nt1+nt2+nt3)/3;
    }
    else if (lt == 'P')
    {
        return (nt1*5+nt2*3*+nt3*2)/10;
    }
}

int main()
{
    float nt1, nt2, nt3, res;

    printf("Digite as tres notas seguida da letra(10 10 10):");
    scanf("%f %f %f",&nt1, &nt2, &nt3);

    res = Media(nt1, nt2, nt3);

    printf("A media ficou: %.2f", res);

    return 0;
}