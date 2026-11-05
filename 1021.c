#include <stdio.h>
 
int main() {
 
    double valor;
    int notas,moedas;
    
    scanf("%lf", &valor);
    
    printf("NOTAS:\n");
    
    notas=valor/100;
    printf("%d nota(s) de R$ 100.00\n", notas);
    valor=valor-notas*100;
    
    notas=valor/50;
    printf("%d nota(s) de R$ 50.00\n", notas);
    valor=valor-notas*50;
    
    notas=valor/20;
    printf("%d nota(s) de R$ 20.00\n", notas);
    valor=valor-notas*20;
    
    notas=valor/10;
    printf("%d nota(s) de R$ 10.00\n", notas);
    valor=valor-notas*10;
    
    notas=valor/5;
    printf("%d nota(s) de R$ 5.00\n", notas);
    valor=valor-notas*5;
    
    notas= valor/2;
    printf("%d nota(s) de R$ 2.00\n", notas);
    valor=valor-notas*2;
    
    printf("MOEDAS:\n");
    
    moedas=valor/1;
    printf("%d moeda(s) de R$ 1.00\n", moedas);
    valor= valor-moedas*1;
    
    moedas=valor/0.50;
    printf("%d moeda(s) de R$ 0.50\n",moedas);
    valor=valor-moedas*0.50;
    
    moedas=valor/0.25;
    printf("%d moeda(s) de R$ 0.25\n", moedas);
    valor=valor-moedas*0.25;
    
    moedas=valor/0.10;
    printf("%d moeda(s) de R$ 0.10\n", moedas);
    valor=valor-moedas*0.10;
    
    moedas=valor/0.05;
    printf("%d moeda(s) de R$ 0.05\n", moedas);
    valor=valor-moedas*0.05;
    
    moedas=valor/0.01;
    printf("%d moeda(s) de R$ 0.01\n", moedas);
    valor=valor-moedas*0.01;
    
    
    return 0;
}