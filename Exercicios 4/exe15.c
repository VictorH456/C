//Nome: Victor Hugo Souza Costa 
//Matricula: 2022010016
// 15.Elabore um programa que faça a leitura de vários números inteiros até que se digite um número
//negativo. O programa tem de retornar o maior e o menor número lido.


#include<stdio.h>

int main()
{
    int min ,max ,num;
    scanf("%d",&num);
    
    min = num;
    max = num;

    for (;;)
    {
        scanf("%d",&num);
        if (num<0)
        {
            break;
        }
        else if (num>max)
        {
            max = num;
        }
        else if(num<min)
        {
            min = num;
        }
        
    }
    
    printf("O min %d e o max %d", min, max);

    return 0;
}