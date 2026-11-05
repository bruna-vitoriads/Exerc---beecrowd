#include <stdio.h>
 
int main() {
 
    int codigo1, pecas1;
    int codigo2, pecas2;
    float valor1, valor2, total;
    
    
    scanf("%d %d %f", &codigo1,&pecas1,&valor1);
    scanf("%d %d %f", &codigo2,&pecas2,&valor2);
    
    total=(pecas1*valor1)+(pecas2*valor2);
    
    printf("VALOR A PAGAR: R$ %.2f\n", total);
 
    return 0;
}