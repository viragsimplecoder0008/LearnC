#Variables in C

**Variables in C are like this:**
```txt
Imagine a variable like a box: A box that has an address, an item, a name.
```
This is how we write variables in C:
```C
int lol = 0; // We can do char for letters/numbers, int for only numbers, and float for decimals
```
**How do we print these variables?**
**Like this:**
```C
#include <stdio.h>

int main() {
    int smth = 0;
    char[5] lol = "1234";
    float smth2 = 0.1;
    printf("%d for smth, %s for lol, %f for smth2.", smth, lol, smth2); // %d is for int, %s is for char, %f is for float.
}
```
**Output:**
```
0 is for smth, 1234 is for lol, 0.1 is for smth2.
```
C pointers
----------
**C pointers are variables that you can "point" to another variable.**
**Example:**
```C
#include <stdio.h>

int main() {
    int lol = 2; // make a new variable called lol with the value 2
    int *op = &lol; // make a POINTER variable pointing to the lol variable, with the same value as lol
    printf("lol was: %d\n", lol); // \n is for newline, which gives cleaner output on each line.
    *op = 10; // changes the value of lol from 2 to 10
    printf("lol is now: %d\n", lol);
}
```
**Output:**
```
lol was: 2
lol is now: 10
```