#include <stdio.h>

int main() {
    int lol;
    printf("If, Else if, Else: \n"); // By now you will not need comments for old things.
    scanf("%d", lol);
    if (lol == 1) {
        printf("Your input was: Lower than 1 (0 or -<number>)"); // If lol is equal to 1, then execute this:
    }
    else if (lol > 1) {
        printf("Your input was higher than 1."); // If the if was false, then execute this:
    }
    else {
        printf("Sorry, your input is not valid."); // If the if, else if statments were false, then print this:
    }
    return 0;
}