# Bitwise Operators

**Difficulty:** Easy  
**Topics:** N/A  
**HackerRank URL:** [Bitwise Operators](https://www.hackerrank.com/challenges/bitwise-operators-in-c/problem)

## Problem Description

In this challenge, you will use logical bitwise operators.  All data is stored in its binary representation.  The logical operators, and C language, use  to represent true and  to represent false. The logical operators compare bits in two numbers and return true or false,  or , for each bit compared.

*
`Bitwise AND operator &` The output of bitwise AND is *1* if the corresponding bits of two operands is *1*. If either bit of an operand is *0*, the result of corresponding bit is evaluated to *0*. It is denoted by &.

*
`Bitwise OR operator |` The output of bitwise OR is *1* if at least one corresponding bit of two operands is *1*. It is denoted by |.

*
`Bitwise XOR (exclusive OR) operator ^` The result of bitwise XOR operator is *1* if the corresponding bits of two operands are opposite. It is denoted by .

For example, for integers 3 and 5,

```
3 = 00000011 (In Binary)
5 = 00000101 (In Binary)

AND operation        OR operation        XOR operation
  00000011             00000011            00000011
& 00000101           | 00000101          ^ 00000101
  ________             ________            ________
  00000001  = 1        00000111  = 7       00000110  = 6

```

You will be given an integer , and a threshold, i1nnik$.  Print the results of the and, or and exclusive or comparisons on separate lines, in that order.

**Example** **

The results of the comparisons are below:

```
a b   and or xor
1 2   0   3  3
1 3   1   3  2
2 3   2   3  1

```

For the `and` comparison, the maximum is .  For the `or` comparison, none of the values is less than , so the maximum is .  For the `xor` comparison, the maximum value less than  is .  The function should print:

```
2
0
2

```

Function Description**

Complete the *calculate_the_maximum* function in the editor below.

*calculate_the_maximum* has the following parameters:

* *int n:* the highest number to consider

* *int k:* the result of a comparison must be lower than this number to be considered

**Prints**

Print the maximum values for the `and`, `or` and `xor` comparisons, each on a separate line.

**Input Format**

The only line contains  space-separated integers,  and .

**Constraints**

*

*

**Sample Input 0**

```
5 4

```

**Sample Output 0**

```
2
3
3

```

**Explanation 0**

All possible values of  and  are:

*

*

*

*

*

*

*

*

*

*

The maximum possible value of  that is also  is , so we print  on first line.

*
The maximum possible value of  that is also  is , so we print  on second line.

*
The maximum possible value of  that is also  is , so we print  on third line.

## Examples



## Constraints



## Solution

```c
// HackerRank Problem: Bitwise Operators
// Link: https://www.hackerrank.com/challenges/bitwise-operators-in-c/problem
// Difficulty: Easy
// Language: c

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void calculate_the_maximum(int n, int k) {
 int max_and = 0, max_or = 0, max_xor = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {
            int temp_and = i & j;
            int temp_or = i | j;
            int temp_xor = i ^ j;
            if (temp_and > max_and && temp_and < k) {
                max_and = temp_and;
            }
            if (temp_or > max_or && temp_or < k) {
                max_or = temp_or;
            }
            if (temp_xor > max_xor && temp_xor < k) {
                max_xor = temp_xor;
            }
        }
    }
    printf("%d\n%d\n%d", max_and, max_or, max_xor);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}

```

---
<div align="center">

**🔄 Synced with [CommitSync](https://www.google.com/search?q=CommitSync+extension)**

*Automatically organized and synced by CommitSync.*

</div>
