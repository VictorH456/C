/* Nome: Victor Hugo Souza Costa 
Matricula: 2022010016

13.Faça um programa que mostre ao usuário um menu com quatro opções de
operações matemáticas (as operações básicas, por exemplo). O usuário escolhe
uma das opções, e o seu programa pede dois valores numéricos e realiza a
operação, mostrando o resultado.*/

/*Professora, não é exatamente o que o enunciado pede, mas eu resolvi dá uma melhorada
Eu adicionei potencia além de colocar tudo diretamente na mesma linha(12 + 12, ou 12 ** 2)
só dando um espaço entre eles*/

#include<stdio.h>
#include<math.h> //Usada para potencia.
#include<string.h> //usada para strcmp, comparar as strings.
#include<ctype.h>

//Função de soma.
double Somar(double pn1, double pn2)
{
    double res;
    res = pn1 + pn2;
    return(res);
}

//Função de subtração.
double Subtrair(double pn1, double pn2)
{
    double res;
    res = pn1 - pn2;
    return(res);
}

//Função de multiplicação.
double Multiplicar(double pn1, double pn2)
{
    double res;
    res = pn1 * pn2;
    return(res);
}

//Função de divisão.
double Dividir(double pn1, double pn2)
{
    double res;
    res = pn1 / pn2;
    return(res);
}

//Função de potenciação usando pow.
double Potencia(double pn1, double pn2)
{
    double res;
    res = pow(pn1, pn2);
    return(res);
}

//Função de raiz usando pow.
double raiz(double pn1, double pn2)
{
    double res;
    res = pow(pn1, 1/pn2);
    return(res);
}

int main(void)
{
    //As variaveis.
    double valor1, valor2;  
    char sinal[2], desbug[100],sim_or_nao = 'n';

    //laço infinito com for, tbm funciona com while(1).    
    while (sim_or_nao != 's')
    {
        printf("(ex: 1 + 1; //=raiz)Digite dois valores separados por espaco e no meio o sinal da equacao: "); //Apenas apresentativo.
        
        fgets(desbug, 100, stdin); //Aqui é a entrada dos valores em forma de string.
        
        /*Aqui usando a função sscanf, é possivel passar os valores sem que ocorra a verificação ivalida,
        ao usar scanf para a entrada dos valores, caso fosse digitado um caractere no lugar errado ficava com um bug.*/
        sscanf(desbug, "%lf %s %lf", &valor1, sinal, &valor2); 
        
        /*Aqui para poder adicionar potência foi necessaria a função strcmp que compara string, 
        além de ter que aumentar o tamanho da variavel sinal.*/

        if ((strcmp(sinal,"/") == 0) && valor2 == 0) //Para caso a pessoa tente fazer divisão por zero.
        {
            printf("Nao existe divisao por 0\n");
        }
        // A partir daqui é a verificação normal para cada caso da calculadora.
        else if (strcmp(sinal, "/")==0)
        {
            printf("%5.2lf / %5.2lf = %5.2lf\n",valor1, valor2, Dividir(valor1, valor2)); 
        }
        else if (strcmp(sinal, "-")==0)
        {
            printf("%5.2lf - %5.2lf = %5.2lf\n",valor1, valor2, Subtrair(valor1, valor2));
        }
        else if (strcmp(sinal, "+")==0)
        {
            printf("%5.2lf + %5.2lf = %5.2lf\n",valor1, valor2, Somar(valor1, valor2));        
        }
        else if (strcmp(sinal, "*")==0)
        {
            printf("%5.2lf x %5.2lf = %5.2lf\n",valor1, valor2, Multiplicar(valor1, valor2));
        }
        else if (strcmp(sinal,"**") == 0)
        {
            printf("%5.2lf ** %5.2lf = %5.2lf\n",valor1, valor2, Potencia(valor1, valor2)); 
        }
        else if (strcmp(sinal,"//") == 0)
        {
            printf("%5.2lf // %5.2lf = %5.2lf\n",valor1, valor2, raiz(valor1, valor2)); 
        }
        else //E aqui para caso nenhuma das anteriores funcione.
        {
            printf("Voce digitou alguma coisa errada.\n"); 
        }

        printf("Digite s para sair: ");
        //comando para limpar o buffer para poder receber a proxima entrada
        fflush(stdin);

        scanf("%c",&sim_or_nao);
        sim_or_nao = tolower(sim_or_nao);
        
        fflush(stdin);
    }
    return 0;
}