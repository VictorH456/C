//Nome: Victor Hugo Souza Costa
//Matricula: 2022010016
// 2.Escreva um programa que leia do usuário os nomes de dois arquivos texto. Crie um
//terceiro arquivo texto com o conteúdo dos dois primeiros juntos (o conteúdo do
//primeiro seguido do conteúdo do segundo).
#include<stdio.h>

int main(){
    FILE *fp1;
    FILE *fp2;
    FILE *fp3;
    char nome1[FILENAME_MAX];
    char nome2[FILENAME_MAX];
    char nome3[FILENAME_MAX];

    printf("Digite o nome do primeiro arquivo: ");
    scanf("%s", nome1);

    printf("Digite o nome do segundo arquivo: ");
    scanf("%s", nome2);

    printf("Digite o nome do terceiro arquivo(vai ser criado): ");
    scanf("%s", nome3);



    fp1 = fopen(nome1, "r");
    fp2 = fopen(nome2, "r");
    fp3 = fopen(nome3, "a");

for (int i = 0; i < 2; i++)
{
    FILE *fp; // declara um ponteiro para um arquivo
    if (i == 0)
    { // se for a primeira iteração
        fp = fp1; // usa o primeiro arquivo como origem
    }
    else 
    { // se for a segunda iteração
        fp = fp2; // usa o segundo arquivo como origem
    }
    
    char c = fgetc(fp); // lê um caractere do arquivo de origem
    while (c != EOF) 
    { // enquanto não chegar ao fim do arquivo
        fputc(c, fp3); // escreve o caractere no arquivo de destino
        c = fgetc(fp); // lê outro caractere do arquivo de origem
    }
}
    fclose(fp1);
    fclose(fp2);
    fclose(fp3);
    
    return 0;
}