// Online C++ compiler to run C++ program online
#include <iostream>


int isPar(int num){
    if(num % 2 == 0){
        return 1;
    }
    return 0;
}

int isImpar(int num){
    if(num % 2 == 1 || num % 2 == -1){
        return 1;
    }
    return 0;
}

int isNegativo(int num){
    if(num < 0){
        return 1;
    }
    return 0;
}

int isPositivo(int num){
    if(num > 0){
        return 1;
    }
    return 0;
}

int main() {
    int n = 0, par = 0;
    //, impar = 0, negativo = 0, positivo = 0;
    
    for(int i = 0; i < 5; i ++){
        scanf("%d", &n);
        // positivo += isPositivo(n);
        // negativo += isNegativo(n);
        par += isPar(n);
        // impar += isImpar(n);
    }
    
    printf("%d valores pares\n", par);
    // printf("%d valor(es) impar(es)\n", impar);
    // printf("%d valor(es) positivo(s)\n", positivo);
    // printf("%d valor(es) negativo(s)\n", negativo);
}
