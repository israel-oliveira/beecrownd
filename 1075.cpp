#include <iostream>

int main() {
    int inteiro = 0;
    
    scanf("%d", &inteiro);
    
    if(inteiro < 10000){
        for(int i = 1; i < 10000; i++){
            if(i % inteiro == 2){
                printf("%d\n", i);
            }
        }
    }

    return 0;
}