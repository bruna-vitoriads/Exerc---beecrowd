#include <stdio.h>

int main() {
    int i = 1, j;

    while (i <= 9) {
        j = i + 6;

        while (j >= i + 4) {
            printf("I=%d J=%d\n", i, j);
            j--;
        }

        i = i + 2;
    }

    return 0;
}
