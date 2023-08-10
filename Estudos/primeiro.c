#include<stdio.h>
#include<stdlib.h>
//#include<locale.h>
int main(void)
{
    int n = 10; //%d para printar inteiros.
    float n2 = 7.71; //%f para floats.
    char letra = 'a'; //%c para char/str. Variável do tipo caracter.
    char frase[10] = "Bom dia!"; //%s para frases. Frase com tamanho predefinido.
    double n3 = 1.2345; //%lf  para floats grandes variável real com precisão dupla.

    //setlocale(LC_ALL,"Portuguese_Brazil");

    int valor1, valor2, soma, sub, mult,resto,divi,poten;
/*
    printf("Gabriel é o Alan??\n");
    printf("Exibindo o numero inteiro %d\n",n);
    printf("Exibindo o numero real %f\n",n2);
    printf("Exibindo o caracter %c\n",letra);
    printf("%s\n", frase);
    printf("Exibindo variavel do tipo double %f\n",n3);
    printf("Valores: %d %f %c %s %f \n",n,n2,letra,frase,n3);
  */  
    printf("Digite um numero inteiro: ");
    scanf("%d",&valor1); //Aqui é o input, ou seja, o comando pra digitar

    printf("Digite outro numero inteiro: ");
    scanf("%d",&valor2);



    //Aqui eu estou atribuindo valores as variaves definidas
    soma = valor1 + valor2;
    sub = valor1 - valor2;
    mult = valor1 * valor2;
    divi = valor1 / valor2;
    resto = valor1 % valor2;
    poten = pow(valor1, valor2);

   /* 
    printf("Valor da soma de %d + %d = %d\n", valor1, valor2, soma);
    printf("Valor da subtracao de %d - %d = %d\n",valor1,valor2,sub);
    printf("Valor da multiplicao de %d x %d = %d\n",valor1,valor2,mult);
    printf("Valor da divisao de %d / %d = %5.2f\n",valor1,valor2,divi);
    //%5.valorf para formatar o tamanho depois da virgula no print. ex: %5.2f */
    //num > 0 ? printf("positivo") : printf("Negativo");
    system("pause");//somente para windows
    return 0;
    
}
