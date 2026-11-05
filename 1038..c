#include <stdio.h>
 
int main() {
 
    int codigo,quant;
    float total;
    
    scanf("%d %d", &codigo, &quant);
    
    if(codigo==1)
    {
        total=quant*4.0;
    }
    else if (codigo==2)
    {
        total=quant*4.50;
    }
    else if (codigo==3)
    {
        total=quant*5.00;
    }
    else if (codigo==4)
    {
        total=quant*2.00;
    }
    else
    {
        total=quant*1.50;
    }
    
    printf("Total: R$ %.2f\n", total);
 
    return 0;
}