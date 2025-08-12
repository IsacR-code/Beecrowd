#include <stdio.h>
#include <math.h>

int main() {
    double A, B, C;
    const double PI = 3.14159;

    scanf("%lf %lf %lf", &A, &B, &C);

    double area_triangulo = (A * C) / 2.0;
    printf("TRIANGULO: %.3f\n", area_triangulo);

    double area_circulo = PI * pow(C, 2);
    printf("CIRCULO: %.3f\n", area_circulo);

    double area_trapezio = ((A + B) * C) / 2.0;
    printf("TRAPEZIO: %.3f\n", area_trapezio);

    double area_quadrado = pow(B, 2);
    printf("QUADRADO: %.3f\n", area_quadrado);

    double area_retangulo = A * B;
    printf("RETANGULO: %.3f\n", area_retangulo);

    return 0;
}