// A entrada consiste de duas linhas. Na primeira linha deve ser informado o valor de pico de uma onda PWM e na segunda linha deve ser informado o valor D do Duty Cycle em dado em %
#include <stdio.h>
#include <math.h>
int main(){
    float valorDePico = 0;
    float dutyCicle = 0;
    float rms = 0;
    scanf("%f %f",&valorDePico,&dutyCicle);
    rms = valorDePico*sqrt(dutyCicle/100);
    printf("V=%.2fV",rms);
}