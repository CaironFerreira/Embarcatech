// A entrada consiste em um valor F que representa a temperatura, dada em Fahrenheit, de uma caldeira lida por um termistor do tipo NTC. A saída deve apresentar o valor lido pelo termistor convertido para graus Celsius e Kelvin com uma precisão de duas casas decimais.
#include <stdio.h>
int main(){
    float temperaturaTermistor = 0;
    float temperaturaEmKelvin = 0;
    float temperaturaEmCelsius = 0;
    scanf("%f",&temperaturaTermistor);
    temperaturaEmCelsius = ((temperaturaTermistor-32)*5)/9;
    temperaturaEmKelvin = temperaturaEmCelsius+273.15;
    printf("C=%.2f\nK=%.2f",temperaturaEmCelsius,temperaturaEmKelvin);
}