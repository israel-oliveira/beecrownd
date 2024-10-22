#include <iostream>

int main() {
    int quantidade_lida = 0, in = 0, out = 0, valor = 0;
    
    scanf("%d", &quantidade_lida);
    for(int i = 0; i < quantidade_lida ; i++){
        scanf("%d", &valor);
        
        if( valor <= 20 && valor >= 10) {
            in++;
        }else{
            out++;
        }
    }
    
    printf("%d in\n", in);
    printf("%d out\n", out);

    return 0;
}