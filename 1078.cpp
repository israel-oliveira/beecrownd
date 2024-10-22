#include <iostream>

int main() {
    int tabuada = 0;
    
    scanf("%d", &tabuada);
    
    if(tabuada > 2 && tabuada < 1000){
        for(int i = 1; i < 11; i++){
            printf("%d x %d = %d\n", i, tabuada, (i * tabuada));
        }
    }

    return 0;
}