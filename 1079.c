#include <stdio.h>

int main() {
    int N, i = 0;
    float A, B, C, media;

    scanf("%d", &N);

    while (i < N) {
        scanf("%f %f %f", &A, &B, &C);

        media = (A * 2 + B * 3 + C * 5) / 10;

        printf("%.1f\n", media);

        i++;
    }

    return 0;
}