#include <stdio.h>

int main() {
    int i, positivo = 0;
    float num = 0, soma = 0, media = 0;

    for(i = 1; i <= 6; i++) {
        scanf("%f", &num);

        if(num > 0) {
            positivo++;
            soma = soma + num;
        }
    }

    media = soma / positivo;

    printf("%d valores positivos\n", positivo);
    printf("%.1f\n", media);

    return 0;
}
