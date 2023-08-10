#include<stdio.h>
#include<locale.h> //Biblioteca pt

int main(void)
{
    setlocale(LC_ALL, "Portuguese"); //tudo dentro fica em pt
        printf("Digite dois números inteiros");
    return 0;
}
// e mudar utf para iso no canto inferior.