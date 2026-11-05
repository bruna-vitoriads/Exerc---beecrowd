#include <stdio.h>
 
int main() {
 
    int num=0,i, par=0, impar=0, positivo=0, negativo=0;
    
    for(i=1;i<=5;i++)
    {
        scanf("%d",&num);
        
        if(num%2==0)
        {
            par++;
        }
        if(num%2!=0)
        {
            impar++;
        }
        if(num>0)
        {
            positivo++;
        }
        if(num<0)
        {
            negativo++;
        }
    }
    
    printf("%d valor(es) par(es)\n",par);
    printf("%d valor(es) impar(es)\n",impar);
    printf("%d valor(es) positivo(s)\n",positivo);
    printf("%d valor(es) negativo(s)\n",negativo);
 
    return 0;
}