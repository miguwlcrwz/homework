#include <stdio.h>
#include <locale.h>
int main(void){
setlocale(LC_ALL, "portuguese"); 
int numero,sucessor,antecessor;
printf("escolha um n�mero: ");
scanf("%d",&numero);
antecessor = numero - 1;
sucessor = numero + 1;
printf("o antecessor desse n�mero �: %d e o sucessor � %d",antecessor,sucessor);
    return 0;
}