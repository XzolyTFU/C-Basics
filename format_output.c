// Copyright Louai Ben Ahmed 2024
#include <stdio.h>

int main() {
    float x1, y1, z1;
    printf("Erster Vektor (x,y,z): ");
    scanf("%f,%f,%f", &x1, &y1, &z1);
    float x2, y2, z2;
    printf("Zweiter Vektor (x,y,z): ");
    scanf("%f,%f,%f", &x2, &y2, &z2);
    float X = y1*z2 - z1*y2;
    float Y = z1*x2 - x1*z2;
    float Z = x1*y2 - y1*x2;
    printf("Das Kreuzprodukt lautet:\n");
    printf("X=%+10.2f\n", X);
    printf("Y=%+10.2f\n", Y);
    printf("Z=%+10.2f\n", Z);
    return 0;
}
