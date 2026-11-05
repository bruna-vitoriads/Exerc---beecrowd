#include <stdio.h>

int main() {
    int X, Y, i, soma = 0, aux;

    scanf("%d %d", &X, &Y);

    if(X > Y) {
        aux = X;
        X = Y;
        Y = aux;
    }

    i = X + 1;

    while(i < Y) {
        if(i % 2 != 0) {
            soma = soma + i;
        }

        i++;
    }

    printf("%d\n", soma);

    return 0;
}
