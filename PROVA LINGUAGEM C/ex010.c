/*10. Elabore uma função que receba o salário bruto de uma pessoa e calcule o valor
da contribuição ao INSS com base na tabela de INSS de 2024. Utilize as faixas e
alíquotas progressivas para calcular o valor da contribuição:
● Até R$ 1.320,00: 7,5%
● De R$ 1.320,01 até R$ 2.571,29: 9%
● De R$ 2.571,30 até R$ 3.856,94: 12%
● De R$ 3.856,95 até R$ 7.507,49: 14%
Use a estrutura condicional aninhada para calcular o desconto corretamente. (0.4
ponto)*/

#include <stdio.h>

float jorge(float salbr);

int main () {

    float salbr;

    printf("Informe seu salario\n");
    scanf("%f", &salbr);

    jorge(salbr);
}

float jorge(float salbr) {

    float sal_liq;
   
    if (salbr<=1320) {
        sal_liq = salbr-(salbr*0.075);
        printf("O salario apos o desconto e: %.2f", sal_liq);
    }
    else if (salbr>=1320.01 && salbr<=2571.29) {
        sal_liq = salbr-(salbr*0.09);
        printf("O salario apos o desconto e: %.2f", sal_liq);
    }
    else if (salbr>=2571.30 && salbr<= 3856.94) {
        sal_liq = salbr-(salbr*0.12);
        printf("O salario ap011os o desconto e: %.2f", sal_liq);
    }
    else if (salbr>=3856.95 && salbr<= 7507.49) {
        sal_liq = salbr-(salbr*0.14);
        printf("O salario apos o desconto e: %.2f", sal_liq);
    }
}