// Copyright Louai Ben Ahmed 2024
#include <stdio.h>

int main(int argc, char** argv) {
    double a, b;
    char operation[2];

    sscanf(argv[1], "%lf", &a);
    sscanf(argv[3], "%lf", &b);
    sscanf(argv[2], "%s", operation);
    double ergebnis = (operation[0] == '+') ? a + b :
        (operation[0] == '-') ? a - b :
        (operation[0] == '*') ? a * b :
        (operation[0] == '/' && b != 0) ? a / b :
        0.00;
    printf("Das Ergebnis lautet: %.2lf ", ergebnis);
}
