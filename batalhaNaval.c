#include <stdio.h>


int main() {
char campo[10][10];  // matriz 10x10 para o campo de batalha
int j=0;

 
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            campo[i][j] = '2';
        }
    }

    printf("  "); 
    for (char letra = 'A'; letra <= 'J'; letra++) {
        printf(" %c", letra);
    }
    printf("\n");

    for (int i = 0; i < 10; i++) {
        printf("%d ", i);
        for (int j = 0; j < 10; j++) {
            printf(" %c", campo[i][j]);
        }
        printf("\n");

    }

    
    return 0;
}
