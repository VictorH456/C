//Nome: Victor Hugo Souza Costa
//Matricula: 2022010016
// 6.Crie uma estrutura representando um aluno de uma disciplina. Essa estrutura deve
//conter o número de matrícula do aluno, seu nome e as notas de três provas. Agora,
//escreva um programa que leia os dados de cinco alunos e os armazene nessa
//estrutura. Em seguida, exiba o nome e as notas do aluno que possui a maior média
//geral dentre os cinco.

#include<stdio.h>

int main()
{
    float medias[5],media;
    int aluno;

    struct Alunos
    {
        int matricula[5];
        char nome[5][40];
        float notas[5][3];
    };
    
    struct Alunos alunos;

    for (int i = 0; i < 5; i++)
    {
        printf("Digite sua matricula: ");
        scanf("%d",&alunos.matricula[i]);

        printf("Digite seu nome: ");
        scanf("%s",alunos.nome[i]);

        printf("Digite suas tres notas(ex:7 7 7): ");
        scanf("%f %f %f",&alunos.notas[i][0],&alunos.notas[i][1],&alunos.notas[i][2]);
    }
       
    for (int i = 0; i < 5; i++)
    {
        medias[i] = (alunos.notas[i][0]+alunos.notas[i][1]+alunos.notas[i][2])/3;
        if (medias[i]>medias[i-1])
        {
            aluno = i;
            media = medias[i];
        }
    }
    
    printf("O aluno %s teve as notas %.2f %.2f %.2f e media %.2f", alunos.nome[aluno], alunos.notas[aluno][0], alunos.notas[aluno][1], alunos.notas[aluno][2], media);

    return 0;
}