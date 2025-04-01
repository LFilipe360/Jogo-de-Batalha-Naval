#include <stdio.h>


int main(){

    int tabuleiro[10][10];
    int navio1[3] = {3, 3, 3};
    int navio2[3] = {3, 3, 3};


    //criando os valores da matriz(criando o tabuleiro enchendo de agua)
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            tabuleiro[i][j] = 0;
        }
    }

    //colocando os navios no tabuleiro
    //Sumario = (A = 1 ... J = 10)!

    //vertical(escolhendo a coordenada começando pela ponta de cima do barco)

    // coordenadaPraCimaY nao pode ser 9 ou 10;
    int coordenadaPraCimaX = 1;
    int coordenadaPraCimaY = 5;

    //verificação de sobreposição de navios
    if(tabuleiro[(coordenadaPraCimaY + 0 - 1)][coordenadaPraCimaX - 1]  == 3 || tabuleiro[(coordenadaPraCimaY + 1 - 1)][coordenadaPraCimaX - 1]  == 3 || tabuleiro[(coordenadaPraCimaY + 2 - 1)][coordenadaPraCimaX - 1]  == 3){
        printf("O navio 1 não pode ser colocado, pois ja existe um navio no local!\n");
    }else{
        for(int i = 0, j = 0; i < 3 && j < 3; i++, j++){
            tabuleiro[(coordenadaPraCimaY + i - 1)][coordenadaPraCimaX - 1] = navio1[j];
        }
    }


    //horizontal(escolhendo a coordenada começando pela ponta do lado esquerda do barco)
    // coordenadaProLadoX nao pode ser 9 ou 10;
    int coordenadaProLadoX = 5;
    int coordenadaProLadoY = 3;

    //verificação de sobreposição de navios
    if(tabuleiro[coordenadaProLadoY - 1][(coordenadaProLadoX + 0 - 1)] == 3 || tabuleiro[coordenadaProLadoY - 1][(coordenadaProLadoX + 1 - 1)] == 3 || tabuleiro[coordenadaProLadoY - 1][(coordenadaProLadoX + 2 - 1)] == 3){
        printf("O navio 2 não pode ser colocado, pois ja existe um navio no local!\n");
    }else{
        for(int i = 0, j = 0; i < 3 && j < 3; i++, j++){
            tabuleiro[coordenadaProLadoY - 1][(coordenadaProLadoX + i - 1)] = navio2[j];
        }
    }


    //Exibindo o tabuleiro
    printf("   A B C D E F G H I J\n");

    for(int i = 0; i < 10; i++){
        if (i == 9)
        {
            printf("%d ", (i + 1));
        }else{
            printf(" %d ", (i + 1));
        }

        for(int j = 0; j < 10; j++){
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
