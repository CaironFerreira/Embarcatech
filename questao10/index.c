// A entrada consiste de três valores c1, c2 e c3 os quais representam as cores das 1ª, 2ª e 3ª faixas do resistor
#include <stdio.h>
#include <string.h>
#include <math.h>
int main(){
    char cores[4] = {' ',' ',' '};
    float resistencia = 0;
    int quantidadeDeZeros=0;
    float minimo = 0;
    float maximo= 0;
    scanf("%c %c %c",&cores[0],&cores[1],&cores[2]);
    for (int index = 0; index < 3 ; index++)
    {
        if (cores[index]=='B'){
            quantidadeDeZeros=0;
            resistencia+=0;
        }else if (cores[index]=='M')
        {
            quantidadeDeZeros=1;
            resistencia+=1;
        }else if (cores[index]=='V')
        {
            quantidadeDeZeros=2;
            resistencia+=2;
        }else if (cores[index]=='L')
        {
            quantidadeDeZeros=3;
            resistencia+=3;
        }else if (cores[index]=='Y')
        {
            quantidadeDeZeros=4;
            resistencia+=4;
        }else if (cores[index]=='G')
        {
            quantidadeDeZeros=5;
            resistencia+=5;
        }else if (cores[index]=='A')
        {
            quantidadeDeZeros=6;
            resistencia+=6;
        }else if (cores[index]=='P')
        {
            quantidadeDeZeros=7;
            resistencia+=7;
        }else if (cores[index]=='C')
        {
            quantidadeDeZeros=8;
            resistencia+=8;
        }else if (cores[index]=='W')
        {
            quantidadeDeZeros=9;
            resistencia+=9; 
        }
        if (index==0){
            resistencia*=10;
        }else if (index==2)
        {
            resistencia-=quantidadeDeZeros;
            resistencia*=(pow(10,quantidadeDeZeros));
        }
    }
    minimo=resistencia*0.8;
    maximo=resistencia*1.2;
    printf("Ref=%.1f Ohm(s)\nMin=%.1f Ohm(s)\nMax=%.1f Ohm(s)",resistencia,minimo,maximo);
}