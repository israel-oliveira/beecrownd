#include <iostream>

int main() {
    char diaTxt1[10], diaTxt2[10];
    int dia_i, hora_i, minuto_i, segundo_i;
    int dia_f, hora_f, minuto_f, segundo_f;

    scanf("%s %d", diaTxt1, &dia_i);
    scanf("%d : %d : %d", &hora_i, &minuto_i, &segundo_i);
    scanf("%s %d", diaTxt2, &dia_f);
    scanf("%d : %d : %d", &hora_f, &minuto_f, &segundo_f);

    int segundos_inicio = dia_i * 86400 + hora_i * 3600 + minuto_i * 60 + segundo_i;
    int segundos_fim = dia_f * 86400 + hora_f * 3600 + minuto_f * 60 + segundo_f;

    int segundos_eventos = segundos_fim - segundos_inicio;

    printf("%d dia(s)\n", segundos_eventos / 86400);
    printf("%d hora(s)\n", (segundos_eventos % 86400) / 3600);
    printf("%d minuto(s)\n", (segundos_eventos % 3600) / 60);
    printf("%d segundo(s)\n", segundos_eventos % 60);

    return 0;
}