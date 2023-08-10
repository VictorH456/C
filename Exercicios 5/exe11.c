//Nome: Victor Hugo Souza Costa
//Matricula: 2022010016
//  11.Leia um conjunto de números reais, armazenando-o em vetor. Em seguida, calcule o
// quadrado de cada elemento desse vetor, armazenando esse resultado em outro vetor.
// Os conjuntos têm, no máximo, 20 elementos. Imprima os dois conjuntos de números.

#include<stdio.h>
#include<math.h>

int main()
{
    double vetor[20], vetor2[20];

    printf("Digite os elementos do vetor:\n");
    for (int i = 0; i < 20; i++)
    {
        scanf("%lf", &vetor[i]);
    }

    for (int i = 0; i < 20; i++)
    {
        vetor2[i] = pow(vetor[i], 2);
    }
    
    printf("O primeiro vetor: ");
    for (int i = 0; i < 20; i++)
    {
        printf("%.2lf ", vetor[i]);
    }

    printf("\nO segundo vetor: ");
    for (int i = 0; i < 20; i++)
    {
        printf("%.2lf ", vetor2[i]);
    }

    return 0;
}