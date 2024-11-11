//Simple Bubble Sorter that sorts given numbers into a number with ciphers from the most little to the biggest
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main () {
    printf("Give your number :");
    char number[255];
    scanf("%s", number);
    bool nochange;
    do {
        nochange = true;
        int j = strlen(number)-1;
        while (j > 0) {
            if (number[j] < number[j-1]) {
                char x = number[j];
                number[j] = number[j-1];
                number[j-1] = x;
                nochange = false;
            }
            j--;
        }
    }
    while (nochange == false);
    printf("This is the new ascending order : %s\n", number);
    return 0;
}