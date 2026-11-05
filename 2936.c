#include <stdio.h>
 
int main() {
 
    int curupira, boitata,boto,mapinguari, iara;
    int cur,boit,bot, map, iar, soma;
    
    scanf("%d %d %d %d %d",&cur, &boit,&bot,&map,&iar);
    
    curupira=cur*300;
    boitata=boit*1500;
    boto=bot*600;
    mapinguari=map*1000;
    iara=iar*150;
    
    soma=curupira+boitata+boto+mapinguari+iara+225;
    
    printf("%d\n", soma);
 
    return 0;
}