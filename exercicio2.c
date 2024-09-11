#include <stdio.h>
int main (void){
    int altura,base,moldura;
    printf("qual a altura do quadro?");
    scanf("%d",&altura);
    printf("qual a base do quadro?");
    scanf("%d",&base);
    moldura = (base + altura) * 2;
    printf("a quantidade de madeira necessária para a moldura é de %d m",moldura);
return 0;
}