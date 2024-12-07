// A entrada consiste em 3 valores inteiros que correspondem a intensidade da corrente elétrica, a resistência elétrica e o tempo que a corrente leva para percorrer um condutor (dada em minutos), respectivamente.A saída contém um único valor Q representando o valor de energia dissipada.
#include <math.h>
int main(){
    float corrente = 0;
    float resistencia = 0;
    float tempo = 0;
    float energia = 0;
    scanf("%f %f %f",&corrente,&resistencia,&tempo);
    energia = corrente*corrente*resistencia*tempo*60;
    printf("%d",(int)energia);
}