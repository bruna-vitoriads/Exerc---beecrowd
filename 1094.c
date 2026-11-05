#include <stdio.h>

int main() {
    int N, quantia, i = 0, coelhos = 0, ratos = 0, sapos = 0, total = 0;
    float porcC, porcR, porcS;
    char tipo;

    scanf("%d", &N);

    while (i < N) {
        scanf("%d %c", &quantia, &tipo);

        total = total + quantia;

        if (tipo == 'C') {
            coelhos = coelhos + quantia;
        }
        else if (tipo == 'R') {
            ratos = ratos + quantia;
        }
        else if (tipo == 'S') {
            sapos = sapos + quantia;
        }

        i++;
    }

    porcC = (coelhos * 100.0) / total;
    porcR = (ratos * 100.0) / total;
    porcS = (sapos * 100.0) / total;

    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", coelhos);
    printf("Total de ratos: %d\n", ratos);
    printf("Total de sapos: %d\n", sapos);
    printf("Percentual de coelhos: %.2f %%\n", porcC);
    printf("Percentual de ratos: %.2f %%\n", porcR);
    printf("Percentual de sapos: %.2f %%\n", porcS);

    return 0;
}
