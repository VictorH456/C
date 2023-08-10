//Nome: Victor Hugo Souza Costa 
//Matricula: 2022010016
// 16.Em matemática, o número harmônico designado por Hn define-se como o enésimo termo da série
//harmônica. Ou seja: . Apresente um programa que calcule o valor de
//qualquer Hn.

#include<stdio.h>

int main()
{
    int num;
    double hn = 1;
    scanf("%d",&num);
    
    for (int i = 2; i < num; i++)
    {
        hn += 1/i;
    }
    printf("%.2lf",hn);

    return 0;
}