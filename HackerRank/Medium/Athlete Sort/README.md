# Athlete Sort

**Difficulty:** Medium  
**Topics:** N/A  
**HackerRank URL:** [Athlete Sort](https://www.hackerrank.com/challenges/python-sort-sort/problem)

## Problem Description

You are given a spreadsheet that contains a list of  athletes and their details (such as age, height, weight and so on). You are required to sort the data based on the th attribute and print the final resulting table. Follow the example given below for better understanding.

![image](https://s3.amazonaws.com/hr-assets/0/1514874268-6fabad07aa-AthleteSort2.png)

Note that  is indexed from  to , where  is the number of attributes.

**Note**: If two attributes are the same for different rows, for example, if two atheletes are of the same age, print the row that appeared first in the input.

**Input Format**

The first line contains  and  separated by a space. **
The next  lines each contain  elements.

The last line contains .

Constraints**

 **

Each element

Output Format**

Print the  lines of the sorted table. Each line should contain the space separated elements. Check the sample below for clarity.

**Sample Input 0**

```
5 3
10 2 5
7 1 0
9 9 9
1 23 12
6 5 9
1

```

**Sample Output 0**

```
7 1 0
10 2 5
6 5 9
9 9 9
1 23 12

```

**Explanation 0**

The details are sorted based on the second attribute, since  is zero-indexed.

## Examples



## Constraints



## Solution

```python3
# HackerRank Problem: Athlete Sort
# Link: https://www.hackerrank.com/challenges/python-sort-sort/problem
# Difficulty: Medium
# Language: python3

#!/bin/python3

import math
import os
import random
import re
import sys



if __name__ == '__main__':
    nm = input().split()

    n = int(nm[0])

    m = int(nm[1])

    arr = []

    for _ in range(n):
        arr.append(list(map(int, input().rstrip().split())))

    k = int(input())
arr.sort(key=lambda x: x[k])

for row in arr:
    print(*row)

```

---
<div align="center">

**🔄 Synced with [CommitSync](https://www.google.com/search?q=CommitSync+extension)**

*Automatically organized and synced by CommitSync.*

</div>
