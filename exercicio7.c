#include <stdio.h>
#include <locale.h>
int main (void){
setlocale(LC_ALL, "portuguese");
    int codigo;
    float desconto,yydesconto,valortotal,xx,yy;
    printf("qual o código do produto?");
    scanf ("%d",&codigo);
    // fórmula: preço = xx * 15 + yy - desconto.
    xx = codigo / 100;
    yy = codigo % 100;
    yydesconto = yy / 100;
    desconto = (xx * 15 + yy) * yydesconto;
    valortotal = (xx * 15 + yy) - desconto;
    printf("o valor total será de R$%.2f",valortotal);
    return 0;
}