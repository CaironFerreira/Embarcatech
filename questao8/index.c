// A entrada consiste de duas linhas, na primeira linha são informados dois valores, os quais indicam as grandezas a serem informadas, isto é, Tensão, Corrente ou Resistência, em quaisquer ordem.
// Na seguinda linha são informados os valores das grandezas indicadas na primeira linha da entrada.
#include <stdio.h>
#include <string.h>>
int main(){
    char grandeza1[2]= " ";
    char grandeza2[2]= " ";
    int valor1 = 0;
    int valor2 = 0;
    int tensao = 0;
    int resistencia = 0;
    int corrente = 0;
    scanf("%c %c",&grandeza1,&grandeza2);
    scanf("%d %d",&valor1,&valor2);
    if (strcmp(grandeza1,"U")==0){
        tensao = valor1;
    }else if (strcmp(grandeza1,"I")==0){
        corrente = valor1;
    }else{
        resistencia = valor1;
    }
    if (strcmp(grandeza2,"U")==0){
        tensao = valor2;
    }else if (strcmp(grandeza2,"I")==0){
        corrente = valor2;
    }else{
        resistencia = valor2;
    }
    if(corrente>0 && tensao>0){
        resistencia = tensao/corrente;
        printf("R=%d Ohm(s)",resistencia);
    }else if (corrente>0 && resistencia>0){
        tensao = corrente*resistencia;
        printf("U=%dV",tensao);
    }else{
        corrente = tensao/resistencia;
        printf("I=%dA",corrente);
    }
}