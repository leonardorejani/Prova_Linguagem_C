/*15. Crie um programa que converta um valor monetário entre três moedas: real
(BRL), dólar (USD) e euro (EUR). O usuário deve informar a moeda de origem, a
moeda de destino e o valor a ser convertido. As taxas de conversão são as
seguintes:
● 1 USD = 5.30 BRL
● 1 EUR = 6.20 BRL
● 1 BRL = 0.19 USD
● 1 BRL = 0.16 EUR
O programa deve calcular e exibir o valor convertido. Se a moeda informada não for
reconhecida, o programa deve exibir uma mensagem de erro. (0.2 ponto)*/

#include <stdio.h>

float conv(float v, float vt, int m, int mc);

int main()
{
    int m, mc;
    float v, vt;
    
    printf("Informe a moeda de Origem!!\n");
    printf("1 - USD |2 - EUR |3 - BRL\n");
    scanf("%d",&m);
    printf("Informe o valor a converter: ");
    scanf("%f",&v);
    printf("Qual modeda converter ? ");
    scanf("%d",&mc);
    
    conv (v, vt, m, mc);
        
}

float conv(float v, float vt, int m, int mc){ 

    if (m == 1 && mc == 3){
        vt = v * 5.30;
        printf("O valor convertido e: %.2f", vt);
    }else if (m == 2 && mc ==  3){
        vt = v * 6.20;
        printf("O valor convertido e: %.2f", vt);
    }else if(m == 3  && mc == 1 ){
        vt = v * 0.19;
        printf("O valor convertido e: %.2f", vt);
    }else if (m == 3 && mc == 2){
        vt = v * 0.16;
        printf("O valor convertido e: %.2f", vt);
    }else{
        printf("Valores incorretos");
    }
}