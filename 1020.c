#include <stdio.h>
 
int main() {
 
    int dias, anos, meses, diasrestantes;
    
    scanf("%d", &dias);
    
    anos= dias/365;
    diasrestantes=dias%365;
    meses=diasrestantes/30;
    diasrestantes= diasrestantes%30;
    
    printf("%d ano(s)\n", anos);
    printf("%d mes(es)\n", meses);
    printf("%d dia(s)\n", diasrestantes);
 
    return 0;
}