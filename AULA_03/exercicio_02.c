#include<stdio.h>
#include<locale.h>

int main ()
{
    setlocale(LC_CTYPE, "");

    int hora, minuto, minuto_total;

    printf("hora?");
    scanf("%d", &hora );

    printf("minuto?");
    scanf("%d", minuto);

    minuto_total = (hora * 60) + minuto;
    printf("Ja se passaram %d minuto", minuto_total);



    return 0;
}
