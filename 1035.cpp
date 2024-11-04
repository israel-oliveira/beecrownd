#include <stdio.h>
 
int main() {
    
    int a, b, c, d;
    
    scanf("%d %d %d %d", &a, &b, &c, &d);
    
    if(b > c && d > a){
        
        if((c+d) > (a+b)){
           
           if(d > 0 && c > 0){

                if(a%2 == 0){
                    printf("Valores aceitos\n");
                    return 0;
                }else{
                    printf("Valores nao aceitos\n");
                    return 0;
                }

            }else{
                printf("Valores nao aceitos\n");
                return 0;  
            }
                   
        }else{
             printf("Valores nao aceitos\n");
             return 0;
        }
    
    }else{
        printf("Valores nao aceitos\n");
        return 0;
    }
}
