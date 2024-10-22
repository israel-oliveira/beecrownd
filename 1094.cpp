// Online C++ compiler to run C++ program online
#include <iostream>

int main() {
    int quant_exp,quant, qc, qs, qr, tc;
    char tipo;
    
    qc = 0;
    qs = 0;
    qr = 0;
    
    scanf("%d", &quant_exp);
    
    tc = 0;
    
    for(int i = 0; i < quant_exp; i++){
        scanf("%d %c", &quant, &tipo);
        
         if(tipo == 'S'){
            qs += quant;
        }
        
        if(tipo == 'C'){
            qc += quant;
        }
        
        if(tipo == 'R'){
            qr += quant;
        }
    }
    
    tc =( qc + qs + qr);
    
    printf("Total: %d cobaias\n", tc);
    printf("Total de coelhos: %d\n", qc);
    printf("Total de ratos: %d\n", qr);
    printf("Total de sapos: %d\n", qs);
    printf("Percentual de coelhos: %.2f %%\n", (qc /(tc/100.0)));
    printf("Percentual de ratos: %.2f %%\n", (qr /(tc/100.0)));
    printf("Percentual de sapos: %.2f %%\n", (qs /(tc/100.0)));
}