// Neste problema será fornecido a quantidade de horas H de indisponibilidade de um Sistema Embarcado. Na saída deve ser informado a porcentagem de disponibilidade do Sistema Embarcado, com uma precisão de 2 casas decimais
#include <stdio.h>
int main(){
    float tempoIndisponivel = 0;
    float disponibildade = 0;
    scanf("%f",&tempoIndisponivel);
    disponibildade = ((720-tempoIndisponivel)*100)/720;
    printf("%.2f%%",disponibildade);
}