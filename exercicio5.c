#include <stdio.h>
#include <locale.h>
int main (void){
    setlocale(LC_ALL, "portuguese");
    int semana,dia,evento;
    printf("serão quantos dias de evento?");
    scanf("%d",&evento);
    semana = evento / 7;
    dia = evento % 7;
    printf("vão ser: %d semanas e %d dias",semana,dia);
    return 0;
}