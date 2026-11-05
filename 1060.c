#include <stdio.h>
 
int main() {
 
    float num=0;
    int i, numero=0;
    
    for(i=1; i<=6;i++)
    {
        scanf("%f", &num);
        
        if(num>0)
        {
            numero++;
        }
    }
    printf("%d valores positivos\n", numero);
 
    return 0;
}