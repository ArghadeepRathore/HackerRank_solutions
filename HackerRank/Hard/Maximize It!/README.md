# Maximize It!

**Difficulty:** Hard  
**Topics:** N/A  
**HackerRank URL:** [Maximize It!](https://www.hackerrank.com/challenges/maximize-it/problem)

## Problem Description

You are given a function . You are also given  lists. The  list consists of  elements.

You have to pick one element from each list so that the value from the equation below is *maximized*: **

%

 denotes the element picked from the  list . Find the maximized value   obtained.

 denotes the modulo operator.

Note that you need to take exactly one element from each list, not necessarily the largest element. You add the squares of the chosen elements and perform the modulo operation. The maximum value that you can obtain, will be the answer to the problem.

Input Format**

The first line contains  space separated integers  and . **
The next  lines each contains an integer , denoting the number of elements in the  list, followed by  space separated integers denoting the elements in the list.

Constraints**

 **

Output Format**

Output a single integer denoting the value .

**Sample Input**

```
3 1000
2 5 4
3 7 8 9
5 5 7 8 9 10

```

**Sample Output**

```
206

```

**Explanation**

Picking  from the st list,  from the nd list and  from the rd list gives the maximum  value equal to % = .

## Examples



## Constraints



## Solution

```python3
# HackerRank Problem: Maximize It!
# Link: https://www.hackerrank.com/challenges/maximize-it/problem
# Difficulty: Hard
# Language: python3

from itertools import product

K, M = map(int, input().split())

lists = []
for _ in range(K):
    data = list(map(int, input().split()))
    lists.append(data[1:])  # ignore first element (size)

max_value = 0

for combination in product(*lists):
    value = sum(x*x for x in combination) % M
    max_value = max(max_value, value)

print(max_value)

```

---
<div align="center">

**🔄 Synced with [CommitSync](https://www.google.com/search?q=CommitSync+extension)**

*Automatically organized and synced by CommitSync.*

</div>
