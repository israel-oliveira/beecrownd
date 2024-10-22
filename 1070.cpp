#include <iostream>

int main() {
    int x = 0, contador = 0;
    
    scanf("%d", &x);
   
    while(true){
        if(x % 2 == 1 || x % 2 == -1){
            printf("%d\n", x);
            contador++;
        }
        x++;
        
        if(contador == 6){
            break;
        }
    }
}