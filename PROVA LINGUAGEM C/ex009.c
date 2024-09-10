/*9. Crie uma função que receba o salário bruto de uma pessoa e calcule o valor do
Imposto de Renda Retido na Fonte (IRRF) com base na tabela de IRRF de 2024.
Utilize as alíquotas e deduções conforme a tabela abaixo:
● Até R$ 2.112,00: Isento
● De R$ 2.112,01 até R$ 2.826,65: Alíquota de 7,5% (dedução de R$ 158,40)
● De R$ 2.826,66 até R$ 3.751,05: Alíquota de 15% (dedução de R$ 370,40)
● De R$ 3.751,06 até R$ 4.664,68: Alíquota de 22,5% (dedução de R$ 651,73)
● Acima de R$ 4.664,68: Alíquota de 27,5% (dedução de R$ 884,96)
Use a estrutura condicional aninhada para calcular o imposto corretamente. (0.4
ponto)*/

#include <stdio.h>

float impr (float salbr);

int main () {

    float salbr;

    printf("Informe o salario bruto\n");
    scanf("%f", &salbr);

    impr(salbr);
}


float impr (float salbr){
    float v_imp;
    
    if (salbr<=2112.00) {
        printf("Voce esta isento de imposto");
    }
    else if (salbr>=2112.01 && salbr<=2826.65) {
        v_imp = (salbr*0.075) - 158.40;
        printf("O imposto a declarar e de: %.2f", v_imp);
    }
    else if (salbr>=2826.66 && salbr<=3751.05) {
        v_imp = (salbr*0.15) - 370.40;
        printf("O imposto a declarar e de: %.2f", v_imp);
    }
    else if (salbr>=3751.06 && salbr<=4664.68) {
        v_imp = (salbr*0.225) - 651.73;
        printf("O imposto a declarar e de: %.2f", v_imp);
    }
    else if (salbr>4664.68) {
        v_imp = (salbr*0.275) - 884.96;
        printf("O imposto a declarar e de: %.2f", v_imp);  
    }
}