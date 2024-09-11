#include <stdio.h>
int main (void){
int altura,alturam,alturacm ;
printf("qual a sua altura? ");
scanf("%d",&altura);
alturam = altura / 100;
alturacm = altura % 100;
printf("sua altura é:%dm e %dcm",alturam,alturacm);
    return 0;
}