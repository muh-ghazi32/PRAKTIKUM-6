#include <stdio.h>

int main(){
  int kolom, isi, g;
  scanf("%d", &kolom);

  int matrix[kolom];
    for (g = 0; g < kolom; g++) {
      scanf("%d", &isi);
      matrix[g] = isi;
  }      
      for (g = 0; g < kolom; g++) {
        printf("%d ", matrix[g] * (g + 1));
    }printf("\n");
}