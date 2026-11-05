#include <stdio.h>

int main() {
    int X, i = 0;

    scanf("%d", &X);

    if(X % 2 == 0) {
        X++;
    }

    while(i < 6) {
        printf("%d\n", X);
        X = X + 2;
        i++;
    }

    return 0;
}
