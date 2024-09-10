/*4. Elabore uma função que receba três lados de um triângulo e verifique se ele é um
triângulo retângulo. Um triângulo é retângulo se o quadrado da hipotenusa (o maior
lado) for igual à soma dos quadrados dos outros dois lados. Caso o triângulo seja
retângulo, a função deverá informar ao usuário que o triângulo é retângulo, caso
contrário, não deverá fazer nada. (0.1 ponto)*/

#include <stdio.h>

float cont (float l1, float l2, float l3);

int main () {

    float l1, l2, l3;

    printf("Informe os lados de um triangulo\n");
    scanf("%f %f %f", &l1, &l2, &l3); 

    cont (l1, l2, l3);
}

float cont (float l1, float l2, float l3){

    if (l1+l2==l3 || l2+l3==l1 || l1+l3==l2) {
        printf("Triangulo retangulo");
    }
}