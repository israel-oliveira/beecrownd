#include <stdio.h>
 
int main() {
 
    float sal,imp28, imp18, imp8, sobra;
    
    scanf("%f", &sal);
    
    if(sal <= 2000.0){
        printf("Isento\n");
        return 0;
    }
    
    float rest28 = 0;
    rest28 = sal - 4500.0;
    
    if(rest28 > 0){
        sobra = 4500.0;
        imp28 = (rest28 / 100.0) * 28.0;
    }else{
        sobra = sal;
    }
    
    float rest18 = 0;
    rest18 = sobra - 3000.0;
    
    if(rest18 > 0){
        sobra = 3000.0;
        imp18 = (rest18 / 100.0) * 18.0;
    }else{
        sobra = sal;
    }
    
    float rest8 = 0;
    rest8 = sobra - 2000.0;
    
    if(rest8 > 0){
        sobra = 2000;
        imp8 = (rest8 /100.0) * 8.0;
    }else{
        sobra = sal;
    }
    
    printf("R$ %.2f\n", imp8 + imp18 + imp28);
    
}
