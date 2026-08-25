#include<stdio.h>
#include<locale.h>

int main ()

{
    setlocale(LC_CTYPE, "");

    float potencial, horas, consumo_mensal;

    printf(" Potência do equipamento (W)? ");
    scanf("%f", &potencial);

    printf("Horas de uso por dia: ");
    scanf("%f", &horas);

    consumo_mensal = (potencial*horas*30)/1000;

    printf("consumo mensal: %.2f kwh", consumo_mensal);

    return 0;
}
