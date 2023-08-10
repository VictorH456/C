//Nome: Victor Hugo Souza Costa
//Matricula: 2022010016
/* 8.Elabore uma função para verificar se um número é um quadrado perfeito. Um quadrado
perfeito é um número inteiro não negativo que pode ser expresso como o quadrado de
outro número inteiro. Exemplos: 1, 4, 9
*/

#include<stdio.h>

int quadrado(int valor) // Função do quadrado, tentei fazer sem importar nada
{
    int nada = 0; //Defini uma varivel para fazer a comparação mais tarde
    nada = valor == 1 ? 1: nada;
    if (valor > 0)// tem que ser maior que 0 pra ter quadrado perfeito
    {
        for (int i = 1; i < valor; i++) //Laço que vai de 1 até o valor, não o incluindo
        {
            if (valor == i * i)// aqui verifica se o valor é igual ao quadrado do i
            {
                nada = i; // ele recebe i caso seja
            }
        }
    }
    return nada; //aqui retorna
    
}

int main()
{
    int num,res; //aqui eu defino as variaveis
    printf("Digite um valor: ");
    scanf("%d",&num);

    res = quadrado(num); //aqui eu recebo o retorno da anterior
    if (res != 0)//aqui eu comparo
    {

        printf("O quadrado e %d",res);
    }
    else{
        printf("Nao tem quadrado perfeito");
    }
    
    return 0;
}