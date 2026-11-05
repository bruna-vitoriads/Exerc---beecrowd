#include <stdio.h>
 
int main() {
 
    float salario,novosalario, reajuste;
    int percent;
    scanf("%f",&salario);
    
    if(salario>=0 && salario<=400.00)
    {
        percent=15;
        reajuste=salario*0.15;
        novosalario=salario+reajuste;
    }
    else if(salario>400.01 && salario<=800.00)
    {
        percent=12;
        reajuste=salario*0.12;
        novosalario=salario+reajuste;
    }
    else if(salario>800.01 && salario<=1200.00)
    {
        percent=10;
        reajuste=salario*0.10;
        novosalario=salario+reajuste;
    }
    else if(salario>1200.01 && salario<=2000.00)
    {
        percent=7;
        reajuste=salario*0.07;
        novosalario=salario+reajuste;
    }
    else if(salario>2000.00)
    {
        percent=4;
        reajuste=salario*0.04;
        novosalario=salario+reajuste;
    }
    
    printf("Novo salario: %.2f\n",novosalario);
    printf("Reajuste ganho: %.2f\n",reajuste);
    printf("Em percentual: %d %\n", percent);
 
    return 0;
}