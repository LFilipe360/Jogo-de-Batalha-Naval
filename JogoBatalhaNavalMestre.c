#include <stdio.h>


int main(){

    int tabuleiro[10][10];
    int navio1[3] = {3, 3, 3};
    int navio2[3] = {3, 3, 3};
    int navio3[3] = {3, 3, 3};
    int navio4[3] = {3, 3, 3};


    //criando os valores da matriz(criando o tabuleiro enchendo de agua)
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            tabuleiro[i][j] = 0;
        }
    }
/*
    //colocando os navios no tabuleiro
    //Sumario = (A = 1 ... J = 10)!

    //vertical(escolhendo a coordenada começando pela ponta de cima do barco)

    // coordenadaPraCimaY nao pode ser 9 ou 10;
    int coordenadaPraCimaX = 1;
    int coordenadaPraCimaY = 5;

    //verificação de sobreposição de navios e se esta nos limites do tabuleiro
    if(tabuleiro[(coordenadaPraCimaY + 0 - 1)][coordenadaPraCimaX - 1]  == 3 || tabuleiro[(coordenadaPraCimaY + 1 - 1)][coordenadaPraCimaX - 1]  == 3 || tabuleiro[(coordenadaPraCimaY + 2 - 1)][coordenadaPraCimaX - 1]  == 3){
        printf("O navio 1 não pode ser colocado, pois ja existe um navio no local!\n");
    }else if(coordenadaPraCimaY <= 0 || coordenadaPraCimaY > 8 || coordenadaPraCimaX <= 0 || coordenadaPraCimaX > 10){
        printf("O navio 1 não pode ser colocado, pois está fora dos limites do tabuleiro!\n");
    }else{
        for(int i = 0, j = 0; i < 3 && j < 3; i++, j++){
            tabuleiro[(coordenadaPraCimaY + i - 1)][coordenadaPraCimaX - 1] = navio1[j];
        }
    }


    //horizontal(escolhendo a coordenada começando pela ponta do lado esquerda do barco)
    // coordenadaProLadoX nao pode ser 9 ou 10;
    int coordenadaProLadoX = 5;
    int coordenadaProLadoY = 3;

    //verificação de sobreposição de navios e se esta nos limites do tabuleiro
    if(tabuleiro[coordenadaProLadoY - 1][(coordenadaProLadoX + 0 - 1)] == 3 || tabuleiro[coordenadaProLadoY - 1][(coordenadaProLadoX + 1 - 1)] == 3 || tabuleiro[coordenadaProLadoY - 1][(coordenadaProLadoX + 2 - 1)] == 3){
        printf("O navio 2 não pode ser colocado, pois ja existe um navio no local!\n");
    }else if(coordenadaProLadoY <= 0 || coordenadaProLadoY > 10 || coordenadaProLadoX <= 0 || coordenadaProLadoX > 8){
        printf("O navio 2 não pode ser colocado, pois está fora dos limites do tabuleiro!\n");
    }else{
        for(int i = 0, j = 0; i < 3 && j < 3; i++, j++){
            tabuleiro[coordenadaProLadoY - 1][(coordenadaProLadoX + i - 1)] = navio2[j];
        }
    }


    //Diagonal(escolhendo a coordenada começando pela ponta do lado esquerda baixo do barco 
    //indo para cima direita do barco)
    // coordenadaProDiagonal1X nao pode ser 9 ou 10;
    // coordenadaProDiagonal1Y nao pode ser 2 ou 1;
    int coordenadaProDiagonal1X = 5;//5
    int coordenadaProDiagonal1Y = 6;//6

    //verificação de sobreposição de navios e se esta nos limites do tabuleiro
    if(tabuleiro[coordenadaProDiagonal1Y - 0 - 1][(coordenadaProDiagonal1X + 0 - 1)] == 3 || tabuleiro[coordenadaProDiagonal1Y - 1 - 1][(coordenadaProDiagonal1X + 1 - 1)] == 3 || tabuleiro[coordenadaProDiagonal1Y - 2 - 1][(coordenadaProDiagonal1X + 2 - 1)] == 3){
        printf("O navio 3 não pode ser colocado, pois ja existe um navio no local!\n");
    }else if(coordenadaProDiagonal1Y < 3 || coordenadaProDiagonal1Y > 10 || coordenadaProDiagonal1X <= 0 || coordenadaProDiagonal1X > 8){
        printf("O navio 3 não pode ser colocado, pois está fora dos limites do tabuleiro!\n");
    }else{
        for(int i = 0, j = 0; i < 3 && j < 3; i++, j++){
            tabuleiro[coordenadaProDiagonal1Y - j - 1][(coordenadaProDiagonal1X + i - 1)] = navio3[j];
        }
    }

    
    //Diagonal2(escolhendo a coordenada começando pela ponta do lado esquerda cima do barco 
    //indo para baixo direita do barco)
    // coordenadaProDiagonal1X nao pode ser 9 ou 10;
    // coordenadaProDiagonal1Y nao pode ser 9 ou 10;
    int coordenadaProDiagonal2X = 8;
    int coordenadaProDiagonal2Y = 8;

    //verificação de sobreposição de navios e se esta nos limites do tabuleiro
    if(tabuleiro[coordenadaProDiagonal2Y + 0 - 1][(coordenadaProDiagonal2X + 0 - 1)] == 3 || tabuleiro[coordenadaProDiagonal2Y + 1 - 1][(coordenadaProDiagonal2X + 1 - 1)] == 3 || tabuleiro[coordenadaProDiagonal2Y + 2 - 1][(coordenadaProDiagonal2X + 2 - 1)] == 3){
        printf("O navio 4 não pode ser colocado, pois ja existe um navio no local!\n");
    }else if(coordenadaProDiagonal2Y <= 0 || coordenadaProDiagonal2Y > 8 || coordenadaProDiagonal2X <= 0 || coordenadaProDiagonal2X > 8){
        printf("O navio 4 não pode ser colocado, pois está fora dos limites do tabuleiro!\n");
    }else{
        for(int i = 0, j = 0; i < 3 && j < 3; i++, j++){
            tabuleiro[coordenadaProDiagonal2Y + j - 1][(coordenadaProDiagonal2X + i - 1)] = navio4[j];
        }
    }
*/
    //teste:


    //criando a  matriz do ataque em cone
    int ataqueCone[5][5];

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            
            if(i == 2 || (i == 1 && (j == 1 || j == 2 || j == 3)) || (i == 0 && j == 2 )){
                ataqueCone[i][j] = 5;
            }else{
                ataqueCone[i][j] = 0;
            }
        }
    }

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            printf("%d ", ataqueCone[i][j]);//i j
        }
        printf("\n");
    }


 printf("\n");
  printf("\n");

  //criando a  matriz do ataque em cruz
  int ataqueCruz[5][5];

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            
            if(i == 2 || j == 2){
                ataqueCruz[i][j] = 5;
            }else{
                ataqueCruz[i][j] = 0;
            }
        }
    }

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            printf("%d ", ataqueCruz[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    printf("\n");
    
    //criando a  matriz do ataque em Octaedro
    int ataqueOctaedro[5][5];

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            
            if(i == 2 || j == 2 || (i == 1 && (j == 1 || j == 3)) || (i == 3 && (j == 1 || j == 3))){
                ataqueOctaedro[i][j] = 5;
            }else{
                ataqueOctaedro[i][j] = 0;
            }
        }
    }

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            printf("%d ", ataqueOctaedro[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    printf("\n");

    //aplicando o ataque em cone no tabuleiro
    int coordenadaAtaqueConeY = 1;
    int coordenadaAtaqueConeX = 1;

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(ataqueCone[i][j] == 5){
                tabuleiro[coordenadaAtaqueConeX - 1 + i][coordenadaAtaqueConeY - 1 + j] = ataqueCone[i][j];
            }
            //printf("%d ", ataqueCone[i][j]);
        }
        //printf("\n");
    }

    //aplicando o ataque em cruz no tabuleiro
    int coordenadaAtaqueCruzY = 6;
    int coordenadaAtaqueCruzX = 6;

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if (ataqueCruz[i][j] == 5){
                tabuleiro[coordenadaAtaqueCruzX - 1 + i][coordenadaAtaqueCruzY - 1 + j] = ataqueCruz[i][j];
            }
            
            
            //printf("%d ", ataqueCone[i][j]);
        }
        //printf("\n");
    }

    //aplicando o ataque em octaedro no tabuleiro
    int coordenadaAtaqueOctaedroY = 1;
    int coordenadaAtaqueOctaedroX = 6;

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if (ataqueOctaedro[i][j] == 5){
                tabuleiro[coordenadaAtaqueOctaedroX - 1 + i][coordenadaAtaqueOctaedroY - 1 + j] = ataqueOctaedro[i][j];
            }
            
            //printf("%d ", ataqueCone[i][j]);
        }
        //printf("\n");
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
