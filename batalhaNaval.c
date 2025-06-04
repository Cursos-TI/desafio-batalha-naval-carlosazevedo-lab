#include <stdio.h>


int main() {
char campo[10][10];  // matriz 10x10 para o campo de batalha
int j=0;

    // Inicializa a matriz com água (~)
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            campo[i][j] = '2';
        }
    }

    // Imprime cabeçalho com letras A-J
    printf("  "); // espaço para os números na esquerda
    for (char letra = 'A'; letra <= 'J'; letra++) {
        printf(" %c", letra);
    }
    printf("\n");

    // Imprime as linhas com números 0-9
    for (int i = 0; i < 10; i++) {
        printf("%d ", i);
        for (int j = 0; j < 10; j++) {
            printf(" %c", campo[i][j]);
        }
        printf("\n");

    }

    
    return 0;
}
