#include <stdio.h>
int main(void){
int numero,sucessor,antecessor;
printf("escolha um número: ");
scanf("%d",&numero);
antecessor = numero - 1;
sucessor = numero + 1;
printf("o antecessor desse número é: %d e o sucessor é %d",antecessor,sucessor);
    return 0;
}