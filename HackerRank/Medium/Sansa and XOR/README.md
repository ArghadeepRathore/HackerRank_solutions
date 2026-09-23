# Sansa and XOR

**Difficulty:** Medium  
**Topics:** N/A  
**HackerRank URL:** [Sansa and XOR](https://www.hackerrank.com/challenges/sansa-and-xor/problem)

## Problem Description

Sansa has an array. She wants to find the value obtained by [XOR](http://en.wikipedia.org/wiki/XOR#Bitwise_operation)-ing the contiguous subarrays, followed by [XOR](http://en.wikipedia.org/wiki/XOR#Bitwise_operation)-ing the values thus obtained. Determine this value.

**Example** **

```
Subarray	Operation	Result
3		None		3
4		None		4
5		None		5
3,4		3 XOR 4		7
4,5		4 XOR 5		1
3,4,5		3 XOR 4 XOR 5	2

```

Now we take the resultant values and XOR them together:

.  Return .

Function Description**

Complete the *sansaXor* function in the editor below.

sansaXor has the following parameter(s):

* *int arr[n]:* an array of integers

**Returns**

* *int:* the result of calculations

**Input Format**

The first line contains an integer , the number of the test cases.

Each of the next  pairs of lines is as follows: **
- The first line of each test case contains an integer , the number of elements in .

- The second line of each test case contains  space-separated integers .

Constraints**

 **

Sample Input 0**

```
2
3
1 2 3
4
4 5 7 5

```

**Sample Output 0**

```
2
0

```

**Explanation 0**

*Test case 0:* **

*Test case 1:*

Sample Input 1**

```
2
3
98 74 12
3
50 13 2

```

**Sample Output 1**

```
110
48

```

**Explanation 1**

*Test Case 0:*

*Test Case 1:*

## Examples



## Constraints



## Solution

```cpp
// HackerRank Problem: Sansa and XOR
// Link: https://www.hackerrank.com/challenges/sansa-and-xor/problem
// Difficulty: Medium
// Language: cpp

#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'sansaXor' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

int sansaXor(vector<int> arr) {
    int n = arr.size();

    if (n % 2 == 0)
        return 0;

    int ans = 0;

    for (int i = 0; i < n; i += 2) {
        ans ^= arr[i];
    }

    return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string t_temp;
    getline(cin, t_temp);

    int t = stoi(ltrim(rtrim(t_temp)));

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string n_temp;
        getline(cin, n_temp);

        int n = stoi(ltrim(rtrim(n_temp)));

        string arr_temp_temp;
        getline(cin, arr_temp_temp);

        vector<string> arr_temp = split(rtrim(arr_temp_temp));

        vector<int> arr(n);

        for (int i = 0; i < n; i++) {
            int arr_item = stoi(arr_temp[i]);
            arr[i] = arr_item;
        }

        int result = sansaXor(arr);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));
        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}

```

---
<div align="center">

**🔄 Synced with [CommitSync](https://www.google.com/search?q=CommitSync+extension)**

*Automatically organized and synced by CommitSync.*

</div>
