#include<stdio.h>
#include<locale.h>
#include<math.h>

int main ()

{
    setlocale(LC_CTYPE, "");

    float largura, comprimento, valor_unitario, area, quantidade, valor_total;

    printf("Qual È a largura da ·rea (em metros): ");
    scanf("%f", &largura);

    printf("Qual È o comprimento da ·rea em metros: ");
    scanf("%f", &comprimento);

    printf("Qual È o valor de cada caixa: ");
    scanf("%f", &valor_unitario);

    area = (largura*comprimento);
    quantidade = (area/2.5);
    valor_total = ceil(quantidade)*valor_unitario;

    printf("\n¡rea total a ser revestida: %.2f m≤", area);
    printf("\nQuantidade de caixas necess·rias: %.2f ", ceil(quantidade));
    printf("\nCusto total da compra: R$ %2.f", valor_total);


    return 0;
}
