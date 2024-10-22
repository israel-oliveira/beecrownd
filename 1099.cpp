#include <stdio.h>
 
int main() {
 
   int numero_de_casos, x, y, maior, menor, soma;

   scanf("%d", &numero_de_casos);

   for(int i = 0; i < numero_de_casos; i++){
        scanf("%d %d", &x, &y);

            maior = (x > y) ? x : y;
            menor = (y < x) ? y : x;
            soma = 0;

            menor++;

        for(int num = menor;menor < maior; menor++){

            if(menor % 2 != 0){
                soma += menor;
            }
        }

        printf("%d\n", soma);
   }
 
    return 0;
}