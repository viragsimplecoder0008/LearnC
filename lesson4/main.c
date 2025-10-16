#include <stdio.h>

int main () {
    int bruh; // declare var bruh.
    printf("Enter value for bruh (only numbers): \n"); // print "Enter value for bruh", then a newline for cleaner output.
    scanf("%d", &bruh); // gets user input, stores into the bruh variable.
    printf("What you typed: %d", bruh); // print What you typed: %d
    return 0; // return success
}