# Validating UID 

**Difficulty:** Easy  
**Topics:** N/A  
**HackerRank URL:** [Validating UID ](https://www.hackerrank.com/challenges/validating-uid/problem)

## Problem Description

*ABCXYZ* company has up to  employees. **
The company decides to create a unique identification number (UID) for each of its employees.

The company has assigned you the task of validating all the randomly generated UIDs.

A valid UID must follow the rules below:

* It must contain at least  uppercase English alphabet characters.

* It must contain at least  digits ( - ).

* It should only contain alphanumeric characters ( - ,  -  &  - ).

* No character should repeat.

* There must be exactly  characters in a valid UID.

Input Format**

The first line contains an integer , the number of test cases. **
The next  lines contains an employee's UID.

Output Format**

For each test case, print 'Valid' if the UID is valid. Otherwise, print 'Invalid', on separate lines. Do not print the quotation marks.

**Sample Input**

```
2
B1CD102354
B1CDEF2354

```

**Sample Output**

```
Invalid
Valid

```

**Explanation**

**B1CD102354**:  is repeating →  Invalid **
B1CDEF2354**: Valid

## Examples



## Constraints



## Solution

```python3
# HackerRank Problem: Validating UID 
# Link: https://www.hackerrank.com/challenges/validating-uid/problem
# Difficulty: Easy
# Language: python3

import re

for _ in range(int(input())):
    uid = input()
    
    if (len(uid) == 10 and
        re.search(r'[A-Z].*[A-Z]', uid) and
        re.search(r'\d.*\d.*\d', uid) and
        re.match(r'^[a-zA-Z0-9]+$', uid) and
        len(set(uid)) == 10):
        print("Valid")
    else:
        print("Invalid")

```

---
<div align="center">

**🔄 Synced with [CommitSync](https://www.google.com/search?q=CommitSync+extension)**

*Automatically organized and synced by CommitSync.*

</div>
