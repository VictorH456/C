//Nome: Victor Hugo Souza Costa
//Matricula: 2022010016
// 3.Escreva um programa para converter o conteúdo de um arquivo texto em caracteres
//maiúsculos. O programa deverá ler do usuário o nome do arquivo a ser convertido e o
//nome do arquivo a ser salvo.
#include<stdio.h>
#include<ctype.h>

int main(){
    FILE *fp1;
    FILE *fp2;
    char nome1[FILENAME_MAX];
    char nome2[FILENAME_MAX];

    printf("Digite o nome do primeiro arquivo: ");
    scanf("%s", nome1);

    printf("Digite o nome do segundo arquivo: ");
    scanf("%s", nome2);

    fp1 = fopen(nome1, "r");
    fp2 = fopen(nome2, "w");

    FILE *fp; // declara um ponteiro para um arquivo

   char c = fgetc(fp1); // lê um caractere do arquivo de origem
    c = toupper(c); // converte o caractere para maiúsculo
    while (c != EOF) 
    { // enquanto não chegar ao fim do arquivo
        fputc(c, fp2); // escreve o caractere no arquivo de destino
        c = fgetc(fp1); // lê outro caractere do arquivo de origem
        c = toupper(c); // converte o caractere para maiúsculo
    }

    fclose(fp1); // fecha o primeiro arquivo
    fclose(fp2); // fecha o segundo arquivo

    return 0;

}