#include <stdio.h>
 
int main() {
 
    int func,horas;
    double valorh, salario;
    
    scanf("%d %d %lf", &func,&horas,&valorh);
    
    salario=horas*valorh;
    
    printf("NUMBER = %d\n", func);
    printf("SALARY = U$ %.2lf\n", salario);
 
    return 0;
}