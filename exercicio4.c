#include <stdio.h>
#include <locale.h>
int main (void){
setlocale(LC_ALL, "portuguese");
float valortotal;
int parcelas,entrada,valorinteiro;
printf("qual o valor total da compra?");
scanf("%f",&valortotal);
valorinteiro = valortotal;
parcelas = valorinteiro / 3;
entrada = valorinteiro - (parcelas * 2);
printf("o valor da entrada é: %.3d, e das duas parcelas: 2x %.3d",entrada,parcelas);
return 0;
}