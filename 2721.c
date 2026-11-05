#include <stdio.h>
 
int main() {
 
    int r1,r2,r3,r4,r5,r6,r7,r8,r9,soma;
    int resto;
    scanf("%d %d %d %d %d %d %d %d %d",&r1,&r2,&r3,&r4,&r5,&r6,&r7,&r8,&r9);
    soma=r1+r2+r3+r4+r5+r6+r7+r8+r9;
    resto=soma%9;
    
    if(resto==1)
    {
        printf("Dasher\n");
    }
    else if(resto==2)
    {
        printf("Dancer\n");
    }
    else if(resto==3)
    {
        printf("Prancer\n");
    }
    else if(resto==4)
    {
        printf("Vixen\n");
    }
    else if(resto==5)
    {
        printf("Comet\n");
    }
    else if(resto==6)
    {
        printf("Cupid\n");
    }
    else if(resto==7)
    {
        printf("Donner\n");
    }
    else if(resto==8)
    {
        printf("Blitzen\n");
    }
    else if(resto==0)
    {
        printf("Rudolph\n");
    }
    

    return 0;
}