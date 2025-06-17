#include <stdio.h>

char direita[10] = "direita";
char esquerda[10] = "esquerda";
char cima[10] = "cima";
int peca;

int main(){

    printf("Qual peca voce ira mover?\n1- Torre\n2- Bispo\n3- Rainha\n");
    scanf("%d",&peca);

    int count = 0;

    switch(peca){
        case 1: for (int i = 0; i < 5; i++){
            printf("%s.\n",direita);
        }break;
    
        case 2: while (count < 5){
            printf("%s, %s.\n",direita,cima);
            count++;
        }break;

        case 3: do{
            printf("%s.\n",esquerda);
            count++;
        } while (count < 8);break;

        default: printf("ERRO!");break;
    }
    
    return 0;
}