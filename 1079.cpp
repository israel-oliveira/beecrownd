#include <iostream>

int main() {
    int casos;
    float a = 0.0, b = 0.0, c = 0.0;

    casos = 0;
   
    scanf("%d", &casos);
 
    for(int i = 0; i < casos; i++){
        scanf("%f %f %f", &a, &b, &c);
        printf("%.1f\n", ((a * 0.2) + (b * 0.3) + (c * 0.5)));
    }
}