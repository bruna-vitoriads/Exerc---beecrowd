#include <stdio.h>
 
int main() {
 
    int horas, velocidade;
    float distancia, litros;
    
    scanf("%d %d", &horas, &velocidade);
    
    distancia=horas*velocidade;
    litros=distancia/12;
    
    printf("%.3f\n", litros);
 
    return 0;
}