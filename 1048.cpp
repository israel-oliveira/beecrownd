#include <stdio.h>
 
int main() {
 
    float salario, ganho;
    int percentual;
    
    scanf("%f", &salario);
    
    if(salario >= 0 && salario <= 400.0){
        ganho = (salario / 100) * 15;
        percentual = 15;
    }else if(salario > 400.0 && salario <= 800.0){
        ganho = (salario / 100) * 12;
        percentual = 12;
    }else if(salario > 800.0 && salario <= 1200.0){
        ganho = (salario / 100) * 10;
        percentual = 10;
    }else if(salario > 1200.0 && salario <= 2000.0){
        ganho = (salario / 100) * 7;
        percentual = 7;
    }else{
        ganho = (salario / 100) * 4;
        percentual = 4;
    }
    
    printf("Novo salario: %.2f\n", (salario + ganho));
    printf("Reajuste ganho: %.2f\n", ganho);
    printf("Em percentual: %d %\n", percentual);
 
    return 0;
}
