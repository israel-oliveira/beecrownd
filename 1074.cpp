#include <iostream>

int main() {
    int qtd = 0, v = 0;
    
    scanf("%d", &qtd);
    
    if(qtd < 10000){
        for(int i = 0; i < qtd; i++){
            
            scanf("%d", &v);
            
            if(v == 0){
                printf("NULL\n");
            }else if(v % 2 == 0){
                if(v > 0){
                    printf("EVEN POSITIVE\n");
                }else{
                    printf("EVEN NEGATIVE\n");
                }
            }else{
                if(v > 0){
                    printf("ODD POSITIVE\n");
                }else{
                    printf("ODD NEGATIVE\n");
                }
            }
            
        }
    }

    return 0;
}