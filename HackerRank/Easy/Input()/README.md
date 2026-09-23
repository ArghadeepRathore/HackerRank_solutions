# Input()

**Difficulty:** Easy  
**Topics:** N/A  
**HackerRank URL:** [Input()](https://www.hackerrank.com/challenges/input/problem)

## Problem Description

`This challenge is only for`**`Python 2`**`.`

### [input()](https://docs.python.org/2/library/functions.html#input)

In **Python 2**, the expression *input()* is equivalent to *eval(raw* _*input(prompt))*.

**Code**

```
>>> input()
1+2
3
>>> company = 'HackerRank'
>>> website = 'www.hackerrank.com'
>>> input()
'The company name: '+company+' and website: '+website
'The company name: HackerRank and website: www.hackerrank.com'

```

**Task**

You are given a [polynomial](https://en.wikipedia.org/wiki/Polynomial)  of a single indeterminate (or variable), . **
You are also given the values of  and . Your task is to verify if .

Constraints** **
All coefficients of polynomial  are integers.

 and  are also integers.

Input Format**

The first line contains the space separated values of  and . **
The second line contains the polynomial .

Output Format**

Print `True` if . Otherwise, print `False`.

**Sample Input**

```
1 4
x**3 + x**2 + x + 1

```

**Sample Output**

```
True

```

**Explanation**

Hence, the output is `True`.

## Examples



## Constraints



## Solution

```pypy3
// HackerRank Problem: Input()
// Link: https://www.hackerrank.com/challenges/input/problem
// Difficulty: Easy
// Language: pypy3

x, k = map(int, input().split())
S = input()

print(eval(S) == k)

```

---
<div align="center">

**🔄 Synced with [CommitSync](https://www.google.com/search?q=CommitSync+extension)**

*Automatically organized and synced by CommitSync.*

</div>
