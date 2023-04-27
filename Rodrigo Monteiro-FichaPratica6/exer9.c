#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

int main() {
    char frase[MAX_SIZE];
    char letra;
    int count = 0;

    printf("Digite uma frase (maximo 100 caracteres): ");
    gets(frase);

    printf("Digite uma letra: ");
    scanf("%c", &letra);

    for (int i = 0; i < strlen(frase); i++) {
        if (frase[i] == letra) {
            count++;
        }
    }

    printf("A letra '%c' aparece %d vezes na frase.\n", letra, count);

    return 0;
}