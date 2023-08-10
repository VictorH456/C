//Nome: Victor Hugo Souza Costa 
//Matricula: 2022010016
//Faça um algoritmo que leia um número positivo e imprima seus divisores. Exemplo: Os divisores do
//número 66 são: 1, 2, 3, 6, 11, 22, 33 e 66.

#include<stdio.h>

int main()
{
    int num;
    scanf("%d",&num);

    printf("Os divisores de %d: ",num);

    for (int i = 1; i < num+1; i++){
        if (num%i == 0)
        {
            printf("%d ",i);
        }}
    return 0;
}