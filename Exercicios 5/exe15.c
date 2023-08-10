//Nome: Victor Hugo Souza Costa
//Matricula: 2022010016
// 15.Leia um vetor com 10 números de ponto flutuante. Em seguida, ordene os elementos
//desse vetor e imprima o vetor na tela.


#include<stdio.h>

int main(){
    float num[10], troca1, troca2, cont;

    for (int i = 0; i < 10; i++)
    {
        scanf("%f",&num[i]);
    }
    
    for (int i = 0; i < 10; i++)
    {
        troca1 = num[i];
        for (int j = 0; j < 10; j++)
        {
            troca2 = num[j];
            if (troca1 < troca2)
            {
                num[i] = troca2;
                num[j] = troca1;
                troca1 = num[i];
            }}}
    
    printf("O vetor é: "); 
    for (int i = 0; i < 10; i++)
    {
        printf("%.2f ",num[i]);
    }
    

    return 0;
}