#include <iostream>

int main() {
    int entrada = 0;
    
    scanf("%d", &entrada);
    
    if(entrada > 5 && entrada < 2000){
        for(int i = 1; i <= entrada; i++){
            
            if(i%2==0){
                printf("%d^2 = %d\n", i, (i*i));
            }
            
        }
    }

    return 0;
}