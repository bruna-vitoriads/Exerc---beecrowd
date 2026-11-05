#include <stdio.h>
 
int main() {
 
    float n1=0,n2=0, media=0;
    int x=0;
    
    do {
        scanf("%f", &n1);

        while (n1 < 0 || n1 > 10) {
            printf("nota invalida\n");
            scanf("%f", &n1);
        }

        scanf("%f", &n2);

        while (n2 < 0 || n2 > 10) {
            printf("nota invalida\n");
            scanf("%f", &n2);
        }

        media = (n1 + n2) / 2.0;
        printf("media = %.2f\n", media);

        printf("novo calculo (1-sim 2-nao)\n");
        scanf("%d", &x);

        while (x < 1 || x > 2) {
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d", &x);
        }

    } while (x != 2);

    return 0;
}
