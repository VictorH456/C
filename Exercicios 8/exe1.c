//Nome: Victor Hugo Souza Costa
//Matricula: 2022010016
// 1.Escreva um programa que leia do usuário o nome de um arquivo texto. Em seguida,
//mostre na tela quantas linhas esse arquivo possui.

#include<stdio.h>

#define MAX 100 // tamanho máximo da linha

int main(){
 FILE *fp;
 char nome[FILENAME_MAX]; 
 // FILENAME_MAX é uma constante definida na biblioteca padrão C que representa 
 //o comprimento máximo permitido para um nome de arquivo que pode ser aberto pela implementação
 
 int quantidade = 1;
 printf("Digite o nome do arquivo: ");
 scanf("%s", nome); // Defino o nome do arquivo

 fp = fopen(nome, "r"); // abre o arquivo para leitura
 if (fp == NULL) { // se o arquivo não puder ser aberto
   perror("fopen"); // mostra uma mensagem de erro
   return 1; // encerra o programa com um código de erro
 }

 char linha[MAX];

 while (fgets(linha, MAX, fp) != NULL) { // enquanto não chegar ao final do arquivo
   if (!feof(fp)) { // se o final do arquivo não foi atingido
     quantidade++; // conta mais uma linha
   }
 }
 

 fclose(fp); // fecha o arquivo
 printf("%d\n",quantidade); // imprime a quantidade de linhas com uma nova linha no final
 
 return 0;
}