// Neste exemplo, o vetor tokens é do tipo Token, que contém um valor numérico e um caractere que representa o sinal correspondente. Se um token for um valor numérico, o sinal correspondente será definido como \0 (caractere nulo). Se um token for um sinal, o valor numérico correspondente será definido como 0.
// Observe que o código ainda usa a função strtod para converter os tokens numéricos em valores do tipo double. Se o valor retornado por strtod for diferente de 0, ou se o primeiro caractere do token for '0' (indicando um número com zero à esquerda), o valor é armazenado no vetor tokens com o sinal não definido. Caso contrário, o valor numérico é definido como 0 e o sinal correspondente é armazenado no vetor tokens.
// Finalmente, o código percorre o vetor tokens e imprime os valores e sinais correspondentes.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char expression[] = "3 + 4 * (5 - 2) / 2";  // Define a expressão a ser avaliada
  char *token = strtok(expression, " ");      // Extrai o primeiro token da expressão
  double values[10];                          // Vetor para armazenar os valores numéricos
  char signs[10];                             // Vetor para armazenar os sinais
  int i = 0;                                  // Contador para o número de valores numéricos armazenados
  int j = 0;                                  // Contador para o número de sinais armazenados

  // Loop para extrair cada token da expressão
  while (token != NULL) {
    double value = strtod(token, NULL);       // Tenta converter o token em um valor numérico
    // Se o token é um valor numérico, armazena-o no vetor values
    if (value != 0 || token[0] == '0') {
      values[i] = value;
      i++;
    } else {                                  // Caso contrário, assume-se que o token é um sinal e armazena-o no vetor signs
      signs[j] = token[0];
      j++;
    }
    token = strtok(NULL, " ");                // Extrai o próximo token da expressão
  }




  // Loop para imprimir os valores numéricos armazenados no vetor values
  for (int k = 0; k < i; k++) {
    printf("Valor: %f\n", values[k]);
  }

  // Loop para imprimir os sinais armazenados no vetor signs
  for (int k = 0; k < j; k++) {
    printf("Sinal: %c\n", signs[k]);
  }

  return 0;
}
