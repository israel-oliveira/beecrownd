#include <iostream>

int main() {
    int cont = 1;
    for(int valor = 60; valor >= 0; valor -= 5){
        printf("I=%d J=%d\n", cont, valor);
        cont +=3;
    }
}