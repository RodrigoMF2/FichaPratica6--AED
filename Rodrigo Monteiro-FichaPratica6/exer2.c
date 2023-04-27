#include <stdio.h>


void Maior(int a, int b, int* resultado) {
    if (a > b) {
        *resultado = a;
    } else {
        *resultado = b;
    }
}

int main() {
    int a, b, maior;

    printf("Digite dois números inteiros: ");
        scanf("%d %d", &a, &b);

    Maior(a, b, &maior);

    printf("O maior número é %d", maior);

    return 0;

}