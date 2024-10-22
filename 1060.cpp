#include <stdio.h>
 
int main() {
 
    float a = 0.0;
    int p = 0;
    
    for(int i = 0; i < 6; i++){
        scanf("%f", &a);
        if(a > 0.0){
            p++;
        }
    }
    
    printf("%d valores positivos\n", p);
    
    return 0;
}