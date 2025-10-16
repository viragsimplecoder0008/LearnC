Loops in C
----------
**What are loops?**\
**Loops are bits of code that repeat until a certain time.**
**Example:**
```C
#include <stdio.h>

int main() {
    int lol = 0;
    while (lol < 100) {
        printf("Hello World!");
        lol++;
    }
}
```
**Output:**
```
Hello World
Hello World
Hello World
Hello World
Hello World
...
```