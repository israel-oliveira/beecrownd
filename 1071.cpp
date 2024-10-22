#include <iostream>

int main() {
    int x = 0, y = 0, maior = 0, menor = 0, soma = 0;
    
    scanf("%d", &x);
    scanf("%d", &y);
    
    maior = (x > y) ? x : y;
    menor = (x < y) ? x : y;
    menor++;
    for(menor; menor < maior; menor++){
        if(menor % 2 == 1 || menor % 2 == -1){
            soma += menor;
        }
    }
    
    printf("%d\n", soma);
}