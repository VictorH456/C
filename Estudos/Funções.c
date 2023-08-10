#include <stdio.h>

/*Esqueleto de uma função
tipo_de_retorno nome_funcao(parametros)
{
    comandos
}
*/

int multiplicar(int pn1, int pn2)
{
    int res;
    res = pn1 * pn2;
    return(res);
}

int main() 
{
    int v1, v2, resultado;

    printf("Digite o primeiro valor: ");
    scanf("%d", &v1);
    printf("Digite o segundo valor: ");
    scanf("%d", &v2);

    resultado = multiplicar(v1, v2);

    printf("Resultado = %d\n\n",resultado);

    return 0;   
}