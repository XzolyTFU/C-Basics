// Copyright Louai Ben Ahmed 2024
#include <stdio.h>

int main() {
    double a, b;
    char operation;
    printf("Gib deine Rechenaufgabe ein: ");
    scanf("%lf %c %lf", &a, &operation, &b);

    double ergebnis = (operation == '+') ? a + b :
        (operation == '-') ? a - b :
        (operation == '*') ? a * b :
        (operation == '/' && b != 0) ? a / b :
        0.00;

    printf("Das Ergebnis lautet: %.2lf ", ergebnis);
}
