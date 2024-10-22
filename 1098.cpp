#include <stdio.h>
 
int main() {

    float repeticao_principal = 0.0;
    int base = 0, inteiro = 0;

    for(int i = 0; i <= 20; i = i + 2){

         if(repeticao_principal >= 2.0){
            inteiro++;
         }else if(repeticao_principal == 1.0){
            inteiro++;
         }
        
        for(int x = 1; x < 4; x++){
            if(repeticao_principal >= 2.0){
                printf("I=%.0f J=%d\n", repeticao_principal, x + inteiro);
            }else if(repeticao_principal == 0.0){
                printf("I=%.0f J=%d\n", repeticao_principal, x + inteiro);
            }else if(repeticao_principal == 1.0){
                printf("I=%.0f J=%d\n", repeticao_principal, x + inteiro);
            }else{
                printf("I=%.1f J=%d.%d\n", repeticao_principal, x + inteiro, base);
            }
        }

        if(base == 8){
            base = 0;
        }else{
            base += 2;
        }
        repeticao_principal += 0.200000000;
    }
    return 0;
}