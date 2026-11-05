#include <stdio.h>

int main() {
    int N, X, i = 0;

    scanf("%d", &N);

    while(i < N) {
        scanf("%d", &X);

        if(X == 0) {
            printf("NULL\n");
        } else {
            if(X % 2 == 0) {
                printf("EVEN ");
            } else {
                printf("ODD ");
            }

            if(X > 0) {
                printf("POSITIVE\n");
            } else {
                printf("NEGATIVE\n");
            }
        }

        i++;
    }

    return 0;
}
