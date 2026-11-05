#include <stdio.h>
 
int main() {
 
    double A,B,C, areatriangulo, areacirculo, areatrapezio, areaquadrado, arearetangulo;
    double pi=3.14159;
    scanf("%lf %lf %lf", &A,&B,&C);
    
    areatriangulo=(A*C)/2;
    areacirculo= pi*C*C;
    areatrapezio=((A+B)*C)/2;
    areaquadrado=B*B;
    arearetangulo=A*B;
    
    printf("TRIANGULO: %.3lf\n", areatriangulo);
    printf("CIRCULO: %.3lf\n", areacirculo);
    printf("TRAPEZIO: %.3lf\n", areatrapezio);
    printf("QUADRADO: %.3lf\n", areaquadrado);
    printf("RETANGULO: %.3lf\n", arearetangulo);
 
    return 0;
}