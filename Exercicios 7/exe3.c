//Nome: Victor Hugo Souza Costa
//Matricula: 2022010016
//

#include<stdio.h>

void Conversao(float F)
{
    printf("A conversao fica: %2.f",(F-32.0)*(5.0/9.0));
}
int main()
{
    float num1;
    
    printf("Digite um valor para coverter: ");
    scanf("%f",&num1);

    Conversao(num1);
    return 0;
}