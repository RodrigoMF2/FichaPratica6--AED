#include <stdio.h>

int Maior(int a, int b){

    if(a > b){
         return a;
    }else{
        return b;
    }
}

int main(){

    int a,b,maior;

    printf("Digite dois numeros inteiros: ");
        scanf("%d %d", &a, &b);

    maior = Maior(a,b);

    printf("O Maior numero entre %d e %d é %d ",a,b,maior);

    return 0;
}