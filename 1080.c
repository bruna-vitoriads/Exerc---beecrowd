#include <stdio.h>

int main() {
    int num, maior, posicao, i = 1;

    scanf("%d", &num);
    maior = num;
    posicao = 1;

    while (i < 100) {
        i++;
        scanf("%d", &num);

        if (num > maior) {
            maior = num;
            posicao = i;
        }
    }

    printf("%d\n", maior);
    printf("%d\n", posicao);

    return 0;
}