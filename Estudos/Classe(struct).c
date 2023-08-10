#include <stdio.h>

int main() {
    struct fichaAluno
    {
        int matricula;
        float nota1;
        float nota2;
    };
    
    struct fichaAluno aluno;
    
    printf("Numero de matricula ..: ");
    scanf("%d",&aluno.matricula);
    
    printf("Informe a 1a. nota ..: ");
    scanf("%f",&aluno.nota1);
    
    printf("Informe a 2a. nota ..: ");
    scanf("%f",&aluno.nota2);
    
    printf("O numero de matricula é %d\n", aluno.matricula);
    printf("a primeira nota é %5.1f e a segunda %5.1f", aluno.nota1, aluno.nota2);
    return 0;
}