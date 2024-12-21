#include <stdio.h>

int main(){
  int baris, kolom, isi, g, z;
  scanf("%d %d", &baris, &kolom);
  
    int matrix[baris][kolom];
    for (g = 0; g < baris; g++) {
      for (z = 0; z < kolom; z++) {
        scanf("%d", &isi);
        matrix[g][z] = isi;
      }
    }      
    for (g = 0; g < baris; g++) {
      for (z = 0; z < kolom; z++) {
        printf("%d ", matrix[g][z]);
      } printf("\n");
    }
}