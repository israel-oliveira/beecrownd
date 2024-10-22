#include <iostream>

int main() {
    for(int tres = 1; tres <= 9; tres += 2){
        int valor = 7;
        printf("I=%d J=%d\n", tres, valor);
        printf("I=%d J=%d\n", tres, valor-1);
        printf("I=%d J=%d\n", tres, valor-2);
        
    }
}