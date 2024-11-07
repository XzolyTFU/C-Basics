#include <stdio.h>
#include <string.h>
int main () {
    printf("This is the a counter :)\nGive your scentence :");
    char scentence[255];
    scanf("%[^\n]s", scentence); //Buffer control %[^\n] : the scanf reads the string till the new line
    int acounter = 0;
    for (int i = 0; i < strlen(scentence);i++) {
        if (scentence[i] == 'a' || scentence[i]== 'A') {
            acounter++;
        }
    }
    printf("This scentence includes %i 'a's \n", acounter);
    return 0;
}