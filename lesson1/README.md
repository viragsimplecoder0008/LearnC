#Introduction to C

What is C?
----------
**C is a [statically-typed](https://en.wikipedia.org/wiki/Category:Statically_typed_programming_language/) programming language**

Basics of C
-----------
`//` is for [comments](https://geeksforgeeks.org/c/c-comments/) (e.g. // hello)\
`#include` **is to include a [.h file](https://geeksforgeeks.org/c/header-files-in-c-cpp-and-its-uses/)/library .h's**\
`int main() {...}` **is to define the main [function](https://geeksforgeeks.org/c/c-functions/), which will be auto-executed.**

Writing a Hello World program in C
----------------------------------
```C
#include <stdio.h> // Get the standard input-output library, which includes printf.

int main() { // Declare/define the main function
    printf("Hello World!"); // Print hello world to the console. (Every statment in C MUST end with a semi-colon, like you see here.)
    return 0; // Makes sure the program gives the output as success.
} // End the main function.
```
PLS READ: I will not provide links after this because finding links is sooooo hard.\
**I've added comments to help you understand.**\
**Now, you may ask: "How do we execute this code?"**\
**Well...**\
**Install a compiler (like gcc) on your machine, and make sure its installed by typing into the cmd/terminal on your machine:**
```bash
"gcc --version"
```
**How do we run this program?:** **We just make a new file called hello-world.c, then we paste the above code into hello-world.c, and then we just:**\
```bash
gcc hello-world.c -o hello-world
```
**Run it:**
```bash
./hello-world
```
Or, for windows:
```bash
.\hello-world.exe
```
**Now, it just said "Hello World!", right?**
**MOVE ON!**