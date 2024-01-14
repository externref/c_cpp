# Keywords, Variables and Constants

## Keywords
Keywords in C (and any other programming languages) are special reserved tokens that represent a particular functionality or meaning. There are a total of 32 keywords in C.

??? Keywords in C
    | | | | | | | | |
    |-||-|-|-|-|-|-|
    | auto | break | case | char | const | continue | default | do | 
    | double | else | enum | extern | float | for | goto | if |
    | int | long | register | return | short | signed | sizeof | static 
    | struct | switch | typedef | union | unsigned | void | volatile | while |

Each Keyword here has a significance of it's own and cannot be used in any other context.

## Variables
Variables are user defined tokens that acts as a memory address for to store and fetch data in a program. Variables can be re-assigned to some other data value of the same type during the runtime.

### Declaring a variable

```c
// declaration and assignment seperately:
int a;
a = 10;
// declarating and assigning in one line:
int b = 20;
```
![](../../assets/var_declaration.png)

A variable declaration consists of 3 parts: The data type, the variable name and the value of variable.

#### Rules for naming a variable

* Name of a variable can contain alphabets (a-z, A-Z), digits (0-9) and underscore (`_`)
* Name of a variable must start with an alphabet or underscore
* A keyword cannot be used as a variable name
* There should be no space between the characters of the variable name

#### Declaring and Assigning Seperately v/s During Declaration

A variable can be defined initially with no value set to it to edit later. It is usually used when the program involves input from the user or the value is assigned between the program. For example:
```c
#include<stdio.h>

void main(){
    // declaration
    int a;
    printf("enter value of a:");
    // reading and assignment
    scanf("%d", &a);
}
```

The `scanf` function will be explained in further articles.

## Constants

Constant are tokens that act as a memory address that store a value and can be used to fetch it. They are similar to variables except for that they can not be modified once assigned to a value. The naming constraints for constants are same as variable's.

### Declaring a constant

Constants can be defined using the `const` keyword. For example 
```c
const int year = 2024;
```

The value `year` here is an constant and can not be changed or reassigned.
The compiler shows the following error when we try to reassign it: 

**Code** (const.c)
```c
#include<stdio.h>

int main(){
    const int year = 2023;
    year = 2024;
    return 0;
}
```

**Error**
```
sarthak@sarthak ~/D/c_cpp (main)> gcc const.c 
const.c: In function ‘main’:
const.c:5:10: error: assignment of read-only variable ‘year’
    5 |     year = 2025;
      |          ^
```