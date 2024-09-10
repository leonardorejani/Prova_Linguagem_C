/*11. Crie uma função que receba o valor de um produto e calcule o valor do desconto
de ICMS com base nas faixas de preço do produto:
● Até R$ 1.000,00: Desconto de 5%
● De R$ 1.000,01 até R$ 5.000,00: Desconto de 10%
● Acima de R$ 5.000,00: Desconto de 15%
Use a estrutura condicional aninhada para aplicar o desconto corretamente. (0.4
ponto)*/

#include <stdio.h>

float jorge(float pprod);

int main () {

    float pprod;
    
    printf("Informe o preço do produto\n");
    scanf("%f", &pprod);

    jorge(pprod);
}

float jorge(float pprod) {

    float desc;
   
    if (pprod<=1000) {
        desc = pprod - (pprod*0.05);
        printf("Preço produto com desconto: %.2f", desc);
    }
    else if (pprod>=1000.01 && pprod<=5000) {
        desc = pprod - (pprod*0.10);
        printf("Preço produto com desconto: %.2f", desc);
    }
    else if (pprod>5000.01) {
        desc = pprod - (pprod*0.15);
        printf("Preço produto com desconto: %.2f", desc);
    }
}