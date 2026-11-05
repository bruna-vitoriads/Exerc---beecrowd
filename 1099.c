#include <stdio.h>

int main() {
    int N, X, Y, i, soma;

    scanf("%d", &N);

    while (N > 0) {
        scanf("%d %d", &X, &Y);

        soma = 0;

        if (X > Y) {
            i = Y + 1;
            while (i < X) {
                if (i % 2 != 0) {
                    soma = soma + i;
                }
                i++;
            }
        } else {
            i = X + 1;
            while (i < Y) {
                if (i % 2 != 0) {
                    soma = soma + i;
                }
                i++;
            }
        }

        printf("%d\n", soma);
        N--;
    }

    return 0;
}
