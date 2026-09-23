# Sum of Digits of a Five Digit Number

**Difficulty:** Easy  
**Topics:** N/A  
**HackerRank URL:** [Sum of Digits of a Five Digit Number](https://www.hackerrank.com/challenges/sum-of-digits-of-a-five-digit-number/problem)

## Problem Description

**Objective**

The modulo operator, `%`, returns the remainder of a division.  For example, `4 % 3 = 1` and `12 % 10 = 2`.  The ordinary division operator, `/`, returns a truncated integer value when performed on integers.  For example, `5 / 3 = 1`.  To get the last digit of a number in base 10, use  as the modulo divisor.

**Task**

Given a five digit integer, print the sum of its digits.

**Input Format**

The input contains a single five digit number, .

**Constraints**

**Output Format**

Print the sum of the digits of the five digit number.

**Sample Input 0**

```
10564

```

**Sample Output 0**

```
16

```

## Examples



## Constraints



## Solution

```c
// HackerRank Problem: Sum of Digits of a Five Digit Number
// Link: https://www.hackerrank.com/challenges/sum-of-digits-of-a-five-digit-number/problem
// Difficulty: Easy
// Language: c

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int num, sum = 0;
    scanf("%d", &num);
    while(num != 0) {
        sum += num % 10;
        num /= 10;
    }
    printf("%d", sum);
}

```

---
<div align="center">

**🔄 Synced with [CommitSync](https://www.google.com/search?q=CommitSync+extension)**

*Automatically organized and synced by CommitSync.*

</div>
