#include <stdio.h>

int main() {
    int lol = 2; // make a new variable called lol with the value 2
    int *op = &lol; // make a POINTER variable pointing to the lol variable, with the same value as lol
    printf("lol was: %d\n", lol); // \n is for newline, which gives cleaner output on each line.
    *op = 10; // changes the value of lol from 2 to 10
    printf("lol is now: %d\n", lol);
}