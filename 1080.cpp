// Online C++ compiler to run C++ program online
#include <iostream>

int main() {
    int posicao, valor, valor_maior;
    
    posicao = 0;
    valor = 0;
    valor_maior = 0;
 
    for(int i = 0; i < 100; i++){
        scanf("%d", &valor);
        
        if(valor > valor_maior){
            valor_maior = valor;
            posicao = i + 1;
        }
    }
    
    printf("%d\n", valor_maior);
    printf("%d\n", posicao);
}
   