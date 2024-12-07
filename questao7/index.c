// A entrada consiste em duas linhas. Na primeira linha é informado qual Lei de Ohm vai ser utilizada. Na segunda linha é deverá ser informado a diferença de potencial elétrico e a intensidade de corrente elétrica, respectivamente no caso da utilização da 1ᵃ lei de Ohm, caso contrário, deverá ser informado o valor da resistividade, o comprimento e a área da secção transversal do condutor, respectivamente. Na saída deve ser informado o valor calculado para a resistência com uma precisão de duas casas decimais.
#include <stdio.h>
int main(){
    int leiDeOhm = 0;
    scanf("%d",&leiDeOhm);
    if (leiDeOhm==1)
    {
        float tensao = 0;
        float corrente = 0;
        float resistencia = 0;
        scanf("%f %f",&tensao,&corrente);
        resistencia = tensao/corrente;
        printf("R=%.2f Ohm(s)", resistencia);
    }
    else if (leiDeOhm==2)
    {
        float resistividade = 0;
        float comprimento = 0;
        float area = 0;
        float resistencia = 0;
        scanf("%f %f %f",&resistividade,&comprimento,&area);
        resistencia = resistividade * (comprimento/area);
        printf("R=%.2f Ohm(s)", resistencia);
    }
}