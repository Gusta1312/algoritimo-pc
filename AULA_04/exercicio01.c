#include<stdio.h>
#include<locale.h>
#include<math.h>

int main()
{
    setlocale(LC_CTYPE, "");

    float a, b, c, x1, x2, delta;

    printf("Digite o valor de a: ");
    scanf("%f", &a);

    printf("Digite o valor de b: ");
    scanf("%f", &b);

    printf("Digite o valor de c: ");
    scanf("%f", &c);

    delta = b*b - 4*a*c;

    if(delta >= 0){

        x1 = (-b + sqrt(delta)) / (2*a);
        x2 = (-b - sqrt(delta)) / (2*a);

        printf("Raízes da equação:");
        printf("\nx1: %.2f", x1);
        printf("\nx2: %.2f", x2);

    } else {

        printf("não existem raízes reais !!! ");

    }

    return 0;
}
