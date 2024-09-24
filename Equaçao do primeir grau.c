#include <stdio.h>

int main() {
    float a, b, x;

    printf("Digite os coeficientes a e b (ax + b = 0): ");
    scanf("%f %f", &a, &b);

    if (a == 0) {
        if (b == 0) {
            printf("A equação tem infinitas soluções.\n");
        } else {
            printf("A equação não tem solução.\n");
        }
    } else {
        x = -b / a;
        printf("A solução da equação é: x = %.2f\n", x);
    }

    return 0;
}
