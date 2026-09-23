# Variadic functions in C

**Difficulty:** Medium  
**Topics:** N/A  
**HackerRank URL:** [Variadic functions in C](https://www.hackerrank.com/challenges/variadic-functions-in-c/problem)

## Problem Description

Variadic functions are functions which take a variable number of arguments.  In C programming, a variadic function will contribute to the flexibility of the program that you are developing.

The declaration of a variadic function starts with the declaration of at least one named variable, and uses an ellipsis as the last parameter,
e.g.

```
int printf(const char* format, ...);

```

In this problem, you will implement three variadic functions named ,  and   to calculate sums, minima, maxima of a variable number of arguments.  The first argument passed to the variadic function is the count of the number of arguments, which is followed by the arguments themselves.

**Input Format**

* The first line of the input consists of an integer .

* Each test case tests the logic of your code by sending a test implementation of 3, 5 and 10 elements respectively.

* You can test your code against sample/custom input.

* The error log prints the parameters which are passed to the test implementation. It also prints the sum, minimum element and maximum element corresponding to your code.

**Constraints**

 **
 .

Output Format**

"Correct Answer" is printed corresponding to each correct execution of a test implementation."Wrong Answer" is printed otherwise.

**Sample Input 0**

```
1

```

**Sample Output 0**

```
Correct Answer
Correct Answer
Correct Answer

```

## Examples



## Constraints



## Solution

```c
// HackerRank Problem: Variadic functions in C
// Link: https://www.hackerrank.com/challenges/variadic-functions-in-c/problem
// Difficulty: Medium
// Language: c


int  sum (int count,...) {
    va_list args;
    va_start(args, count);

    int result = 0;
    for (int i = 0; i < count; i++) {
        result += va_arg(args, int);
    }

    va_end(args);
    return result;

}

int min(int count,...) {
    va_list args;
    va_start(args, count);

    int result = va_arg(args, int);
    for (int i = 1; i < count; i++) {
        int current = va_arg(args, int);
        if (current < result) {
            result = current;
        }
    }

    va_end(args);
    return result;

}

int max(int count,...) {
    va_list args;
    va_start(args, count);

    int result = va_arg(args, int);
    for (int i = 1; i < count; i++) {
        int current = va_arg(args, int);
        if (current > result) {
            result = current;
        }
    }

    va_end(args);
    return result;

}

```

---
<div align="center">

**🔄 Synced with [CommitSync](https://www.google.com/search?q=CommitSync+extension)**

*Automatically organized and synced by CommitSync.*

</div>
