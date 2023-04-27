#include <stdio.h>

#define NUM_PROJETOS 10

void print_saldos(int saldos[]) {
    printf("Saldos finais dos projetos:\n");
    for (int i = 0; i < NUM_PROJETOS; i++) {
        printf("Projeto %d: R$ %d\n", i, saldos[i]);
    }
}

int main() {
    int saldos[NUM_PROJETOS] = {0}; 
    int codigo_projeto, valor;
    char tipo_despesa;

    printf("Digite o código do projeto, o valor e o tipo de despesa (R ou D):\n");
    while (1) {
        scanf("%d", &codigo_projeto);
        if (codigo_projeto == -1) {
            break;
        }
        scanf("%d %c", &valor, &tipo_despesa);
        if (tipo_despesa == 'R') {
            saldos[codigo_projeto] += valor; 
        } else if (tipo_despesa == 'D') {
            saldos[codigo_projeto] -= valor; 
        }
        printf("Digite o código do projeto, o valor e o tipo de despesa (R ou D):\n");
    }
    
    print_saldos(saldos);

    return 0;
}