#include <stdio.h>

int main() {
	int i, j;
    int pontos[3][5] = {
        {20, 15, 25, 10, 30},   
        {30, 25, 20, 40, 35},   
        {25, 30, 10, 20, 30}    
    };
    
    int total[3] = {0, 0, 0};   
    int vencedor = 0;           

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 5; j++) {
            total[i] += pontos[i][j];
        }
    }

    for (i = 1; i < 3; i++) {
        if (total[i] > total[vencedor]) {
            vencedor = i;
        }
    }

    printf("Pontuação dos jogadores:\n\n");
    for (i = 0; i < 3; i++) {
        printf("Jogador %d: %d pontos\n", i + 1, total[i]);
    }
    printf("\nVencedor: jogador %d\n", vencedor + 1);

    return 0;
}

