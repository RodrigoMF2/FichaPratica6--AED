#include <stdio.h>
# include <math.h>

struct Comodo
{
    int tipo;
    float largura;
    float comprimento;
};

float CalculaArea(float largura, float comprimento){
    return largura * comprimento;
}

int Lampada(int tipo, float area){

    float watts_por_metro_quadrado;
    switch (tipo)
    {
    case 0:
        watts_por_metro_quadrado = 12;
        break;
    case 1:
        watts_por_metro_quadrado = 15;
        break;
    case 2:
        watts_por_metro_quadrado = 18;
        break;
    case 3:
        watts_por_metro_quadrado = 20;
        break;
    case 4:
        watts_por_metro_quadrado = 22;
        break;
    default:
        watts_por_metro_quadrado = 0;
        break;
    }
    int watts_necessarios = ceil(watts_por_metro_quadrado * area);
    int quantidade_lampadas = ceil(watts_necessarios/60.0);
    return quantidade_lampadas;
}

int main() {
    struct Comodo c;
    float area;
    int quantidade_lampadas;

    printf("Digite o tipo de cômodo, largura e comprimento (em metros):\n");
    scanf("%d", &c.tipo);
    while (c.tipo != -1) {
        scanf("%f %f", &c.largura, &c.comprimento);
        area = CalculaArea(c.largura, c.comprimento);
        quantidade_lampadas = Lampada(c.tipo, area);
        printf("Cômodo tipo %d, área %.2f m²: %d lâmpada(s) de 60 watts\n", c.tipo, area, quantidade_lampadas);
        printf("Digite o tipo de cômodo, largura e comprimento (em metros):\n");
        scanf("%d", &c.tipo);
    }

    return 0;
}
