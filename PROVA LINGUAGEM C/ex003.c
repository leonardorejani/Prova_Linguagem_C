
/*3. Crie uma função que receba três lados de um triângulo e verifique se esses lados
formam um triângulo válido. Um triângulo é válido se a soma de dois de seus lados
for sempre maior que o terceiro. Caso o triângulo seja válido, a função deverá
retornar 1. Caso contrário, não deve retornar nada. (0.1 ponto)*/

#include <stdio.h>

float valid(float l1, float l2, float l3);


int main () {

    float l1, l2, l3;

    printf("Informe os tres lados de um triangulo\n");
    scanf("%f %f %f", &l1, &l2, &l3);

    valid( l1, l2, l3);

}

float valid(float l1, float l2, float l3) {
    
    if (l1+l2< l3 || l2+l3< l1 || l1+l3<l2) {
        printf("");
    }
    else {
        printf("1");
    }
}