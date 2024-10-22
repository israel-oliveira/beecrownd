#include <iostream>

int main() {
    int x = 0, contador = 1;
    
    scanf("%d", &x);
   
    while((x+1) != contador){
        if(contador % 2 == 1 || contador % 2 == -1){
            printf("%d\n", contador);
        }
        contador++;
    }
}