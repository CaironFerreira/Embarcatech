// A entrada consiste em 7 valores inteiros que representam as precipitações máximas, dada em milímetros, obtidas em sete dias de observação em uma região. Na saída deve ser informado a media das precipitações máximas da região observada em mm
#include <stdio.h>
int main(){
    int totalDeMilimetros = 0;
    float mediaMilimetros = 0;
    for (int i = 0; i < 7; i++)
    {
        scanf("%d",&totalDeMilimetros);
        mediaMilimetros+=totalDeMilimetros;        
    }
    mediaMilimetros /=7;
    printf("Media=%dmm",(int)mediaMilimetros);
}