// A corrente elétrica é utilizada em circuitos e, devido ao material que a conduz, pode produzir luz, calor e campo elétrico. Podemos calcular o valor da corrente (i) relacionando a quantidade de carga que passa por um condutor ΔQ em um intervalo de tempo Δt, isto é: i=ΔQ/Δt.
#include <stdio.h>
int main(){
    float carga = 0;
    float tempo = 0;
    float corrente = 0;
    scanf("%f %f", &carga,&tempo);
    corrente = carga/tempo;
    printf("i=%.2fA", corrente);
}