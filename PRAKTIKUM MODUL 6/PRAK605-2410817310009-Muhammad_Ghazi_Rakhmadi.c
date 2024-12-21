#include <stdio.h>

int main() {
    int Matriks_A[10][10], Matriks_B[10][10], Matriks_AXB[10][10];
    int m, g, z, i, jumlah = 0;
    
    scanf("%d", &i);
    printf("Matriks A\n");
    for(m = 0; m < i; m++) {
        for(g = 0; g < i; g++) {
            scanf("%d", &Matriks_A[m][g]);
        }
    }
    printf("Matriks B\n");
    for(m = 0; m < i; m++) {
        for(g = 0; g < i; g++) {
            scanf("%d", &Matriks_B[m][g]);
        }
    }
    for(m = 0; m < i; m++) {
        for(g = 0; g < i; g++) {
            for(z = 0; z < i; z++) {
                jumlah = jumlah + Matriks_A[m][z] * Matriks_B[z][g];
            }
            Matriks_AXB[m][g] = jumlah;
            jumlah = 0;
        }
    }
    printf("Matriks AXB\n");
    for(m = 0; m < i; m++) {
        for(g = 0; g < i; g++) {
            printf("%d ", Matriks_AXB[m][g]);
        }
        printf("\n");
    }
}