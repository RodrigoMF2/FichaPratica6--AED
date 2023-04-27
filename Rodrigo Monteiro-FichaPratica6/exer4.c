#include <stdio.h>

struct Pessoa
{
    int nome[50];
    int idade;
    float peso;

};

int main (){

    struct Pessoa pessoas [3];
    int i;

    for(i = 0; i < 3; i++){
        printf("Digite o nome da %d pessoa: ", i+1);
            scanf("%s",&pessoas[i].nome);
        printf("Digite a idade da %d pessoa: ",i+1);
            scanf("%d",&pessoas[i].idade);
        printf("Digite o peso da %d pessoa: ",i+1);
            scanf("%f",&pessoas[i].peso);
        
        printf("\n--------****----------\n");

    }

    for ( i = 0; i < 3; i++)
    {
        printf("\nO nome da %d pessoa é %s\n ",i+1,pessoas[i].nome);
        printf("\nO idade da %d pessoa é %d\n",i+1,pessoas[i].idade);
        printf("\nO peso da %d pessoa é %f\n",i+1,pessoas[i].peso);
    }

    return 0;
    
}
