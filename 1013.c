#include <stdio.h>
#include <stdlib.h>
 
int main() {
 
    int A,B,C, maiorAB, maiorBC, maior;
    
    scanf("%d %d %d", &A, &B, &C);
    
    maiorAB= (A+B+abs(A-B))/2;
    maiorBC= (B+C+abs(B-C))/2;
    maior = (maiorAB + maiorBC + abs(maiorAB - maiorBC)) / 2;

    printf("%d eh o maior\n", maior);
    return 0;
}