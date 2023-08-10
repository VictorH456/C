//Nome: Victor Hugo Souza Costa
//Matricula: 2022010016
// 25.Leia uma matriz de tamanho 10 × 3 com as notas de 10 alunos em três provas. Em
// seguida, calcule e escreva na tela o número de alunos cuja pior nota foi na prova 1, o
// número de alunos cuja pior nota foi na prova 2 e o número de alunos cuja pior nota foi
// na prova 3

#include <stdio.h>

int main()
{
    double notas[10][3],piorNotaProva1 = 0, piorNotaProva2 = 0, piorNotaProva3 = 0;
     
    // lê as notas dos alunos
    for (int i = 0; i < 10; i++)
    {
        printf("Digite as notas do aluno %d (separadas por espaco): ", i + 1);
        scanf("%lf %lf %lf", &notas[i][0], &notas[i][1], &notas[i][2]);

        // verifica qual é a pior nota do aluno
        if (notas[i][0] < notas[i][1] && notas[i][0] < notas[i][2])
        {
            piorNotaProva1++; // se a pior nota for na prova 1, incrementa o contador
        }
        else if (notas[i][1] < notas[i][0] && notas[i][1] < notas[i][2])
        {
            piorNotaProva2++; // se a pior nota for na prova 2, incrementa o contador
        }
        else
        {
            piorNotaProva3++; // se a pior nota for na prova 3, incrementa o contador
        }
    }

    //exibe os resultados
    printf("\nNumero de alunos cuja pior nota foi na prova 1: %.0lf\n", piorNotaProva1);
    printf("Numero de alunos cuja pior nota foi na prova 2: %.0lf\n", piorNotaProva2);
    printf("Numero de alunos cuja pior nota foi na prova 3: %.0lf\n", piorNotaProva3);

    return 0;
}