// Online C++ compiler to run C++ program online
#include <iostream>

float isPositivo(float num){
    if(num > 0){
        return 1;
    }
    return 0;
}

float numPositivo(float num){
    if(num > 0){
        return num;
    }
    return 0;
}

int main() {
    float n = 0.0, positivo = 0.0, soma = 0.0;
    
    for(int i = 0; i < 6; i ++){
        scanf("%f", &n);
        positivo += isPositivo(n);
        soma += numPositivo(n);
    }
    
    printf("%.0f valores positivos\n", positivo);
    printf("%.1f\n", (soma / positivo));
}
