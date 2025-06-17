#include <stdio.h>

char direita[10] = "direita";
char esquerda[10] = "esquerda";
char cima[10] = "cima";
char baixo[10] = "baixo";
int peca;
int casas;
int menu = 1;

void movTorre(int casas){
    for(int i = 0; i < casas; i++){
        printf("%s.\n",direita);
    }
}

void movBispo(int casas){
    for (int i = 0; i < casas; i++){
        printf("%s, %s.\n",cima,direita);
    }
    
}

void movRainha(int casas){
    for (int i = 0; i < casas; i++){
        printf("%s.\n",esquerda);
    }
}

void movCavalo(int casas){
    for (int i = 0; i < casas; i++){
        printf("%s.\n",cima);
    }printf("%s.\n",direita);
}

int main(){

    while(menu != 0){

        printf("Qual peca voce ira mover?\n1- Torre\n2- Bispo\n3- Rainha\n4- Cavalo\n");
        scanf("%d",&peca);

            switch(peca){
                case 1: movTorre(5);break;
    
                case 2: movBispo(5);break;

                case 3:movRainha(8);break;

                case 4:movCavalo(2);break;

                default: printf("ERRO!");break;
            }
        
        printf("--------------------------\n");
        printf("-Sair (0).\n-Outro movimento (1).\n");
        scanf("%d", &menu);
        }
    return 0;
}