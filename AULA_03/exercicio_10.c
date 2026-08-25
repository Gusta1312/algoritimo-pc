#include<stdio.h>
#include<locale.h>
#include<math.h>

int main ()

{
    setlocale(LC_CTYPE, "");

    float velocidade, angulo, alcance_horizontal, angulo_radiano;

    printf("Qual a velocidade inicial (m/s): ");
    scanf("%f", &velocidade);

    printf("Qual o ângulo de lançamento em graus: ");
    scanf("%f", &angulo);

    angulo_radiano = (angulo*3.14)/180;

    alcance_horizontal = (pow(velocidade, 2) *sin (2*angulo_radiano))/9.8;
    printf("O alcance horizontal estimado é: %.2f metros", alcance_horizontal);


    return 0;
}
