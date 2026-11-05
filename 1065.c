#include <stdio.h>
 
int main() {
 
    int i, num=0, pares=0;
    
    for(i=1;i<=5;i++)
    {
        scanf("%d",&num);
        
        if(num%2==0)
        {
            pares++;
        }
    }

    printf("%d valores pares\n", pares);

    return 0;
}