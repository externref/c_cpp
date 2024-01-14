# Data Types, Operators and Expressions

## Data Types

Data types are used to represent the type of a variable or constant i.e. what type of data the variable/constant stores. They can be system defined and user defined.

### System Defined (Generic)
There are 5 generic data types in C: `int`, `float`, `double`, `char`, `void`.

#### Definitions: 

##### Integers (`int`)
The `int` data type is used to represent a integer in the range `-2147483648` to `2147483647`. This data type uses `4 bytes` of memory. Example: 
```c
int num = 10;
```

##### Floats (`float`)
Floats are used to store floating type values like decimals and larger numbers with single point precision. This data type uses `4 bytes` of data. Example: 
```c
float dec = 10.21;
```

##### Doubles (`double`)
`double` stores double precision floating type values with a size of `64 bytes`. It can hold upto 17-18 digits of numbers easily. Example: 
```c
double doub = 120.123523;
```

##### Characters (`char`)
The `char` data type is used to store single character values. The size of these values is `1 byte`. The declaration of these variables use single quotes (`' '`) and can contain only one character. Example: 
```c
char a = 'a';
```

##### Void (`void`)
Void is used to represent "nothing", it is used to specify that no value is present, it is usually used in return values of functions. Example;
```c
void sayHello(char name[]){
    printf("hello %d", name);
}
```

#### Modifiers
Modifiers like `long`, `short`, `unsigned`, `signed` can be used to modify the behaviour of these data types.

### User Defined 
User defined types can be created using Structures (`struct`), Typedefs (`typedef`), Unions (`union`) and Enums (`enum`).
**Example of a struct**:
```c
#include<stdio.h>

struct Student {
    int age;
    int class;
};

int main(){
    struct Student student;
    student.age = 16;
    student.class = 11;
    printf("age of the student is: %d", student.age);
}
```
The `Student` struct acts like a special type that can store class and age of a student can be accesed in other parts of the code.

## Operators

Operators are symbols that are used to perform different kinds of operations with one or more operands. For example: `+`, `-`, `!` etc.

### Types of operators
 
Operators can be divided into various types based on different criterias

#### On basis of number of operands

##### unary operators

These operators involve only one operand to perform operation. Example are:
* Increment/Decrement operators (`++a`, `--a`, `a++`, `a--`)
* Not operator (`!a`)

##### binary operators

These operators involve two operands with the operator in between them. Examples are:
* All arithmetic operators (`1+2`, `100/2`, ...)
* Comparision operators (`1==2`, `5!=120`, `4>5`)
* Bitwise operators

##### ternary operator

This operator requires three operands and is used to perform conditional operations within a single expression. Example:
```c
int a;
scanf("%d", &a);
a>10? printf("a is greater than 10"): printf("a is less than 10");
```

#### Based on functionality

Based on the functionality of the operator operators can be divided into folllowing types:

##### Arithmetic Operators

This includes all arithmetical operators such as `+`, `-`, `/`, `*`, `%`, `++`, `--`.

These are used to increment or decrement the value of a number by 1. The operators can be used as pre-increment/decrement or post-increment/decrement.

###### Pre-Increment/Decrement vs Post-Increment/Decrement
In pre-increment/decrement the value of the variable is first modified then assigned, while in post-increment/decrement modification occurs after assignment.
**Example** 
```c
// post increment
int a = 10, b;
b = a++; // a = 11, b = 10
// pre increment
int x = 10, y;
y = ++x; // x = 11, y = 11
```

##### Relational Operators

This includes all relational operators like `>`, `<`, `>=`, `<=`, `==`, `!=`.

##### Logical Operators

This includes operators that are used along with conditional expressions for multiple conditions and return a value of true (1) or false (0). There are three of them:\

* and (`&&`)
* or (`||`)
* not (`!`)

**Example**
```c
#include <stdio.h>

void main()
{
    int a = 10;
    int b = 20;
    if (a != 20)
    {
        printf("a is not 20\n");
    }
    if (a == 10 && b == 20)
    {
        printf("a is 10 and b is 20\n");
    }
    if (a == 20 || b == 20)
    {
        printf("either a or b or both are 20\n");
    }
}
```

##### Bitwise Operators
These are used to perform bitwise operations with the operands. There are 6 of them in C:

* bitwise and (`&`)
* bitwise or (`|`)
* bitwise xor (`^`)
* bitwise first complement (`~`)
* bitwise right shift (`>>`)
* bitwise left shift (`<<`)

##### Assignment Operators
These are used to assign a value to a variable. Some of them are `=`, `+=`, `-=` etc...
```c
int a;
a = 10 // a is 10
a+=20 // a is 30
a-=5 // a is 25
a/=5 // a is 5
a*=12 // a is 60
a%=10 // a is 2
```

##### Conditional Operators

The ternary conditional operator is used to perform conditional operations in the same expression block.

**Syntax**: 
```yaml
condition? <expression if condition is true>: <expression if condition is false>;
```
**Example**:
```c
#include<stdio.h>

void main(){
    int a;
    printf("enter a number: ");
    scanf("%d", &a);
    a>10? printf("a is greater than 10"): printf("a is less than 10");
}
```
**Output**
```
sarthak@sarthak ~/D/c_cpp (main)> gcc ternary.c; ./a.out
enter a number: 12 
a is greater than 10⏎      
```
