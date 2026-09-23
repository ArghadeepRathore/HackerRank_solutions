# ginortS

**Difficulty:** Medium  
**Topics:** N/A  
**HackerRank URL:** [ginortS](https://www.hackerrank.com/challenges/ginorts/problem)

## Problem Description

You are given a string . **
 contains alphanumeric characters only.

*
Your task is to sort the string  in the following manner:

* All sorted lowercase letters* are ahead of *uppercase letters*.

* All sorted *uppercase letters* are ahead of digits.

* All sorted *odd digits* are ahead of sorted *even digits*.

Input Format**

A single line of input contains the string .

**Constraints**

*

**Output Format**

Output the sorted string .

**Sample Input**

```
Sorting1234

```

**Sample Output**

```
ginortS1324

```

## Examples



## Constraints



## Solution

```python3
# HackerRank Problem: ginortS
# Link: https://www.hackerrank.com/challenges/ginorts/problem
# Difficulty: Medium
# Language: python3

S = input()

lower = sorted([c for c in S if c.islower()])
upper = sorted([c for c in S if c.isupper()])
odd = sorted([c for c in S if c.isdigit() and int(c) % 2 != 0])
even = sorted([c for c in S if c.isdigit() and int(c) % 2 == 0])

print("".join(lower + upper + odd + even))

```

---
<div align="center">

**🔄 Synced with [CommitSync](https://www.google.com/search?q=CommitSync+extension)**

*Automatically organized and synced by CommitSync.*

</div>
