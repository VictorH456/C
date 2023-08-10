#include<stdio.h>
#include<math.h> //Usada para potencia.
#include<string.h> //usada para strcmp, comparar as strings.
#include<ctype.h>
#include<stdlib.h>

//Função de soma.
double Somar(double pn1, double pn2)
{
    return pn1 + pn2;
}

//Função de subtração.
double Subtrair(double pn1, double pn2)
{
    return pn1 - pn2;
}

//Função de multiplicação.
double Multiplicar(double pn1, double pn2)
{
    return pn1 * pn2;
}

//Função de divisão.
double Dividir(double pn1, double pn2)
{
    return pn1 / pn2;
}

//Função de potenciação usando pow.
double Potencia(double pn1, double pn2)
{
    
    return pow(pn1, pn2);
}

//Função de raiz usando pow.
double Raiz(double pn1, double pn2)
{
    if (pn1 < 0 && fmod(pn2, 2.0) == 0.0) {
        // se o radicando for negativo e o índice for par,
        // a raiz não é um número real
        return NAN;
    }
    return pow(pn1, 1.0 / pn2);
}

int main(void)
{
    //As variaveis.
    double valor1[10],resultado;  
    char sinal[10], expressao[100],sim_or_nao = 'n';
    char teste[3] = "00";
    int  j, i;

    //laço infinito com for, tbm funciona com while(1).    
    while (sim_or_nao != 's')
    {
        char possivel = 's';
        resultado = 0;
        j = 0,i = 0;
        printf("(ex: 1 + 1; ^=potencia |=raiz)Digite dois valores separados por espaco e no meio o sinal da equacao: "); //Apenas apresentativo.
        
        fgets(expressao, 100, stdin); //Aqui é a entrada dos valores em forma de string.
        
        char *token = strtok(expressao, " ");
        

        // Loop para extrair cada token da expressão
        while (token != NULL) {
            double value = strtod(token, NULL);       // Tenta converter o token em um valor numérico
            
            // Se o token é um valor numérico, armazena-o no vetor valor
            if (value != 0 || token[0] == '0') {
            valor1[i] = value;
            i++;
            } else {                                  // Caso contrário, assume-se que o token é um sinal e armazena-o no vetor sinal
            sinal[j] = token[0];
            j++;
            }
            token = strtok(NULL, " ");                // Extrai o próximo token da expressão
        }

        while (possivel == 's'){
        for(int loop = 0; loop < 20; loop++)
        {
            *teste = sinal[loop];

            if (strcmp(teste,"^") == 0)
            {
                resultado = Potencia(valor1[loop],valor1[loop+1]);
                valor1[loop] = 0;
                valor1[loop+1] = resultado;
                sinal[loop] = 0;
            }
            else if (strcmp(teste,"|") == 0)
            {
                resultado = Raiz(valor1[loop],valor1[loop+1]);
                valor1[loop] = 0;
                valor1[loop+1] = resultado;
                sinal[loop] = 0;
            }
        }

        for(int loop = 0; loop < 20; loop++)
        {
            if (sinal[loop] == '*')
            {
                resultado = Multiplicar(valor1[loop],valor1[loop+1]);
                valor1[loop] = 0;
                valor1[loop+1] = resultado;
                sinal[loop] = 0;
            }
            else if (sinal[loop] == '/' && valor1[loop+1] !=0) 
            {
                resultado = Dividir(valor1[loop],valor1[loop+1]);
                valor1[loop] = 0;
                valor1[loop+1] = resultado;
                sinal[loop] = 0;
            }
            else if (sinal[loop] == '/' && valor1[loop+1] ==0) 
            {
                possivel = 'n';
            }
        }
        for(int loop = 0; loop < 20; loop++)
        {
            if (sinal[loop] == '+')
            {
                resultado = Somar(valor1[loop],valor1[loop+1]);
                valor1[loop] = 0;
                valor1[loop+1] = resultado;
                sinal[loop] = 0;
            }
            else if (sinal[loop] == '-')
            {
                resultado = Subtrair(valor1[loop],valor1[loop+1]);
                valor1[loop] = 0;
                valor1[loop+1] = resultado;
                sinal[loop] = 0;
            }
        }
        
        possivel = 'm';

        }
        if ((possivel == 's') || (possivel == 'm'))
        {
            printf("O resultado da expressao e %.2lf\n", resultado);
        }
        else if (possivel == 'n')
        {
            printf("Não foi possivel fazer o calculo.");
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