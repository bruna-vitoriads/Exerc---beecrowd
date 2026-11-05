#include <stdio.h>
 
int main() {
 
    float salario, ir;
    
    scanf("%f", &salario);
    
    if(salario<=2000.00)
    {
        printf("Isento\n");
    }
    else if(salario<=3000.00)
    {
        ir=(salario-2000.00)*0.08;
        printf("R$ %.2f\n",ir);
    }
    else if(salario<=4500.00)
    {
        ir=(1000.00*0.08)+(salario-3000.00)*0.18;
        printf("R$ %.2f\n",ir);
    }
    else
    {
        ir=(1000.00*0.08)+(1500.00*0.18)+(salario-4500.00)*0.28;
        printf("R$ %.2f\n",ir);
    }
 
    return 0;
}