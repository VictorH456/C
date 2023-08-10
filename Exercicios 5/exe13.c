//Nome: Victor Hugo Souza Costa
//Matricula: 2022010016
// 13.Faça um programa para ler 10 números diferentes a serem armazenados em um vetor.
//Os números deverão ser armazenados no vetor na ordem em que forem lidos, sendo
//que, caso o usuário digite um número que já foi digitado, o programa deverá pedir a ele
//para digitar outro número. Note que cada valor digitado pelo usuário deve ser
//pesquisado no vetor, verificando se ele existe entre os números que já foram
//fornecidos. Exiba na tela o vetor final que foi digitado.

#include<stdio.h>

int main()
{
    double vetor[10];

    for (int i = 0; i < 10; i++){
        printf("Digite um valor: ");
        scanf("%lf",&vetor[i]);
        
        for (int j = 0; j < 10; j++){
            if ((vetor[i] == vetor[j]) && (i != j))
            {
                printf("Digite outro valor: ");
                scanf("%lf",&vetor[i]);
                j = -1;
            }}}

    printf("Os valores do vetor sao: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%.2lf ",vetor[i]);
    }
    

    return 0;
}