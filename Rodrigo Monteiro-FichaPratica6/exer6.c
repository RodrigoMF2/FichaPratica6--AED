#include<stdio.h>

int notas(float a, float b,float c, char Letra){

    if( Letra == 'A'){
       return (a+b+c)/3.0;

    }else if (Letra == 'P')
    {
        return (a*5+b*3+c*2);
    }
    
    
}

int main(){
    float a,b,c;
    char Letra;
    double calc;

    printf("Digite A para media normal ou P para media ponderada: ");
        scanf("%c", &Letra);

   printf("Digite o valor das notas: ");
        scanf("%f %f %f", &a, &b, &c);

    calc =notas(a, b, c, Letra);

    printf("MEdia = %f ", calc);

    return 0;   
}