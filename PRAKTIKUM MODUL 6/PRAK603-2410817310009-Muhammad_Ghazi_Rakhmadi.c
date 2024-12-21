#include <stdio.h>

int main(){
    int g, z, angka, i;
    scanf("%d %d", &g, &z);
    
    if(g!=z){
        printf("Jumlah tidak sama");
    }else{

    int barisx[g];int barisy[z];
    for(i = 0; i < g; i++){
        scanf("%d", &barisx[i]);} 
    for (i = 0; i < z; i++){
        scanf("%d", &barisy[i]);} 
    for(i = 0; i < g; i++){
        angka = barisx[i] * barisy[i];
        printf("%d ", angka);}
    }
}