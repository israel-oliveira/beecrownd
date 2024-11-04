#include <stdio.h>
#include <math.h>
 
int main() {
 
    double a = 0.0, b = 0.0 , c = 0.0;
    
    scanf("%lf %lf %lf", &a,&b,&c);
 
    double delta = b * b - 4.0 * a * c;
    
    if (a == 0.0 || delta < 0.0) {
        printf("Impossivel calcular\n");
    }else{
        double r1 = (-b + pow(delta, 0.5)) / (2.0 * a);
        double r2 = (-b - pow(delta, 0.5)) / (2.0 * a);
        printf("R1 = %.5f\n", r1);
        printf("R2 = %.5f\n", r2);
    }
    
    return 0;
}
