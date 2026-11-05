#include <stdio.h>

int main() {
    char palavra[4];
    int diaI, diaF;
    int horaI, minutoI, segundoI;
    int horaF, minutoF, segundoF;
    int inicio, fim, duracao;
    int dias = 0, horas = 0, minutos = 0, segundos;

    scanf("%s %d", palavra, &diaI);
    scanf("%d : %d : %d", &horaI, &minutoI, &segundoI);

    scanf("%s %d", palavra, &diaF);
    scanf("%d : %d : %d", &horaF, &minutoF, &segundoF);

    inicio = (diaI - 1) * 86400 + horaI * 3600
             + minutoI * 60 + segundoI;

    fim = (diaF - 1) * 86400 + horaF * 3600
          + minutoF * 60 + segundoF;

    duracao = fim - inicio;

    while (duracao >= 86400) {
        dias++;
        duracao -= 86400;
    }

    while (duracao >= 3600) {
        horas++;
        duracao -= 3600;
    }

    while (duracao >= 60) {
        minutos++;
        duracao -= 60;
    }

    segundos = duracao;

    printf("%d dia(s)\n", dias);
    printf("%d hora(s)\n", horas);
    printf("%d minuto(s)\n", minutos);
    printf("%d segundo(s)\n", segundos);

    return 0;
}
