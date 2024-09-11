#include <stdio.h>
#include <locale.h>
int main (void){ 
setlocale(LC_ALL, "portuguese");
  float litragem,valorpago,litrosuco,litrorefresco,valorcoposuco,valorcoporefresco,lucrosuco,lucrorefresco,percentualsuco,percentualrefresco;
  int coposuco,coporefresco;
// valores de entrada para a quantidade de litros e o preço pago.
  printf("quantos litros de concentrado você comprou? ");
  scanf("%f",&litragem);
  printf("quanto você pagou? ");
  scanf("%f",&valorpago);
  // definindo valores para  calcular quanto de suco e refresco vai produzir com o concentrado.
  litrorefresco = litragem * 5;
  litrosuco = litragem * 3;
// vendo quantos copos são póssiveis com x litros.
coposuco = (int) (litrosuco * 10);
coporefresco = (int) (litrorefresco * 10);
// quanto vai ganhar com os copos 
valorcoposuco = coposuco * 2;
valorcoporefresco = coporefresco * 1;
 // lucros
lucrosuco = valorcoposuco - valorpago;
lucrorefresco = valorcoporefresco - valorpago;
percentualsuco = (lucrosuco/valorcoposuco) * 100;
percentualrefresco = (lucrorefresco/valorcoporefresco) * 100;
//
printf("a quantidade de litros de suco produzidos será de: %.2f e de refresco será de: %.2f",litrosuco,litrorefresco);
printf("\no valor adquirido com o suco será de R$%.2f, e de refresco R$%.2f",valorcoposuco,valorcoporefresco);
printf("\no percentual de lucro do suco será de: %.2f%% de refresco será de: %.2f%%",percentualsuco,percentualrefresco);











return 0;  
}