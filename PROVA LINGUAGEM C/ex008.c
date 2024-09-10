/*8. Elabore uma função que calcule o imposto sobre um salário com base no valor
recebido. Se o salário for maior que R$ 5.000,00, o imposto será de 20%. Caso
contrário, o imposto será de 10%. A função deve exibir o valor do imposto a ser
pago. (0.3 ponto)*/

#include <stdio.h>

float impost (float sal);

int main () {

    float sal;

    printf("Informe o salario\n");
    scanf("%f", &sal);
    
    impost(sal);
}

float impost (float sal) {

    float t_imp;

    if (sal>=5000) {
        t_imp = (sal*0.20);
    }
    else if (sal<5000){
        t_imp = (sal*0.10); 
    }

    printf("O valor do imposto a ser pago e %.2f", t_imp);
}