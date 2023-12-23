# Structure of a C program

## hello, world!

This is a hello world program in C.

```c
#include <stdio.h>

int main(){
    printf("hello, world!\n");
    return 0;
}
```

* The `main` function is the entrypoint of our code. It's the part of code that runs first whenever the program is compiled and executed.
* The `printf` function displays the provided format string to the console.
* The main function must return either an integer or `void` (nothing).
* `stdio.h` header file must be included in order to perform input and output operations with the terminal.

## Parts of a c program 


!!! warning 
    Contains functions and topics not covered yet for illustration purpose.


```c
/*
    This is a program illustrating various parts of a C program.
*/
#include<stdio.h>

#define PI 3.14

int square(int);
float circle(int);

int main() {
  int a = 10;
  printf("area of a square with side %d is %d\n", a, square(a));
  printf("area of a circle with side %d is %.2f\n", a, circle(a));
  return 0;
}

int square(int s) {
  return s * s;
}
float circle(int r) {
  return 3.14 * (float) r * (float) r;
}
```

This code can be divided into parts:

### Documentation
Comments explaining parts of the code comes under documentation
```c
/*
    This is a program illustrating various parts of a C program.
*/
```

### Pre-processor
Header files and definitions in the top of the file are pre-processors
```c
#include<stdio.h>

#define PI 3.14
```

### main function
This is the entrypoint of the program. The main function should always return an `int` or `void`.
If the program is able to run successfully `0` is returned.
```c
int main(){
    ...
    return 0;
}
```

### User defined functions
User defined functions like  `square` and `circle` are used as sub-programs for organising code and providing reusability of code.
```c
int square(int);
float circle(int);

int square(int s) {
  return s * s;
}
float circle(int r) {
  return 3.14 * (float) r * (float) r;
}
```
