#include <stdio.h>

int main() {
    int i = 0, j;

    while (i <= 10) {
        j = 1;

        while (j <= 3) {
            if (i % 5 == 0) {
                printf("I=%d J=%d\n", i / 5, i / 5 + j);
            } else {
                printf("I=%.1f J=%.1f\n", i / 5.0, i / 5.0 + j);
            }

            j++;
        }

        i++;
    }

    return 0;
}
