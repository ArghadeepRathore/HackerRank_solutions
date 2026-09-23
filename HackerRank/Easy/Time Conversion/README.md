# Time Conversion

**Difficulty:** Easy  
**Topics:** N/A  
**HackerRank URL:** [Time Conversion](https://www.hackerrank.com/challenges/time-conversion/problem)

## Problem Description

Given a time in [-hour AM/PM format](https://en.wikipedia.org/wiki/12-hour_clock), convert it to military (24-hour) time.

Note:
- 12:00:00AM on a 12-hour clock is 00:00:00 on a 24-hour clock. **
- 12:00:00PM on a 12-hour clock is 12:00:00 on a 24-hour clock.

Example**

*

Return '12:01:00'.

*

Return '00:01:00'.

**Function Description**

Complete the  function with the following parameter(s):

* : a time in  hour format

**Returns**

* : the time in  hour format

**Input Format**

A single string  that represents a time in -hour clock format (i.e.:  or ).

**Constraints**

* All input times are valid

**Sample Input 0**

```
07:05:45PM

```

**Sample Output 0**

```
19:05:45

```

## Examples



## Constraints



## Solution

```c
// HackerRank Problem: Time Conversion
// Link: https://www.hackerrank.com/challenges/time-conversion/problem
// Difficulty: Easy
// Language: c

#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();

/*
 * Complete the timeConversion function below.
 */

/*
 * Please either make the string static or allocate on the heap. For example,
 * static char str[] = "hello world";
 * return str;
 *
 * OR
 *
 * char* str = "hello world";
 * return str;
 *
 */
char* timeConversion(char* s) {
    int hh = (10 * (s[0] - '0')) + (s[1] - '0');
    if(s[8] == 'P' && hh < 12){
        hh += 12;
    }
    else if(s[8] == 'A' && hh == 12){
        hh = 0;
    }
    s[0] = (char)((hh / 10) + '0');
    s[1] = (char)((hh % 10) + '0');
    s[8] = '\0';
    return s;
}

int main()
{
    FILE* fptr = fopen(getenv("OUTPUT_PATH"), "w");

    char* s = readline();

    char* result = timeConversion(s);

    fprintf(fptr, "%s\n", result);

    fclose(fptr);

    return 0;
}

char* readline() {
    size_t alloc_length = 1024;
    size_t data_length = 0;
    char* data = malloc(alloc_length);

    while (true) {
        char* cursor = data + data_length;
        char* line = fgets(cursor, alloc_length - data_length, stdin);

        if (!line) { break; }

        data_length += strlen(cursor);

        if (data_length < alloc_length - 1 || data[data_length - 1] == '\n') { break; }

        size_t new_length = alloc_length << 1;
        data = realloc(data, new_length);

        if (!data) { break; }

        alloc_length = new_length;
    }

    if (data[data_length - 1] == '\n') {
        data[data_length - 1] = '\0';
    }

    data = realloc(data, data_length);

    return data;
}

```

---
<div align="center">

**🔄 Synced with [CommitSync](https://www.google.com/search?q=CommitSync+extension)**

*Automatically organized and synced by CommitSync.*

</div>
