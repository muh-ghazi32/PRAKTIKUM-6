#include <stdio.h>
#include <string.h>

int main() {
    char asli[100];
    char palsu[100];

    scanf("%[^\n]%*c", &asli);   
    scanf("%[^\n]%*c", &palsu);  

    int code, mas, x, i = 0, j = 0;
    code = strlen(asli);
    mas = strlen(palsu);

    if (code != mas) {
        printf("Panjang kalimat berbeda, pesan palsu");
    } else {
        for (x = 0; x < code; x++) {
            if (asli[x] == ' ' && palsu[x] == ' ') {  
                printf(" ");  
            } else if (asli[x] == ' ' && palsu[x] == ' ') {
                continue;
            } else if (asli[x] == palsu[x]) {
                printf("*");
                i++;
            } else {
                printf("#");
                j++;
            }
        }

        printf("\n* = %d", i);  
        printf("\n# = %d", j);  

        if (i >= j) {
            printf("\nPesan Asli");
        } else if (i < j) {
            printf("\nPesan Palsu");
        }
    }
    return 0;
}