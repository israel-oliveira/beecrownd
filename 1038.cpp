#include <stdio.h>
 
int main() {
 
    int cod, quantidade;
    
    scanf("%d %d", &cod, &quantidade);
    
    if(cod == 1){
        printf("Total: R$ %.2f\n", (quantidade * 4.0));
        return 0;
    }
    
    if(cod == 2){
        printf("Total: R$ %.2f\n", (quantidade * 4.5));
        return 0;
    }
    
    if(cod == 3){
        printf("Total: R$ %.2f\n", (quantidade * 5.0));
        return 0;
    }
    
    if(cod == 4){
        printf("Total: R$ %.2f\n", (quantidade * 2.0));
        return 0;
    }
    
    if(cod == 5){
        printf("Total: R$ %.2f\n", (quantidade * 1.5));
        return 0;
    }
 
    return 0;
}
