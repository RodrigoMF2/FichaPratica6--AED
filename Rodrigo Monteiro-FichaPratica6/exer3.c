#include <stdio.h>

#include <stdio.h>

int encontrar_caractere(char string[], char caractere) {
    int i;
    for (i = 0; string[i] != '\0'; i++) {
        if (string[i] == caractere) {
            return i;
        }
    }
    return -1; // retorna -1 se o caractere não foi encontrado
}

int main(){

    char string[50], caractere;
    int posicao;

    printf("Digite uma string: ");
        fgets(string, 50, stdin);

    printf("Digite um caractere: ");
        scanf("%c", &caractere);

    posicao = encontrar_caractere(string, caractere);

    if (posicao == -1) {
        printf("O caractere '%c' não foi encontrado na string.\n", caractere);
    } else {
        printf("O caractere '%c' foi encontrado na posicao %d da string.\n", caractere, posicao);
    }

    return 0;
}


