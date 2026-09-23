# Largest Permutation

**Difficulty:** Easy  
**Topics:** N/A  
**HackerRank URL:** [Largest Permutation](https://www.hackerrank.com/challenges/largest-permutation/problem)

## Problem Description

You are given an unordered array of unique integers incrementing from .  You can swap any two elements a limited number of times.  Determine the largest lexicographical value array that can be created by executing no more than the limited number of swaps.

**Example** **

The following arrays can be formed by swapping the  with the other elements:

```
[2,1,3,4]
[3,2,1,4]
[4,2,3,1]

```

The highest value of the four (including the original) is .  If , we can swap to the highest possible value: .

Function Description**

Complete the *largestPermutation* function in the editor below.  It must return an array that represents the highest value permutation that can be formed.

largestPermutation has the following parameter(s):

* *int k:* the maximum number of swaps

* *int arr[n]:* an array of integers

**Input Format**

The first line contains two space-separated integers  and , the length of  and the maximum swaps that can be performed.
The second line contains  distinct space-separated integers from  to  as  where .

**Constraints**

 **

Output Format**

Print the lexicographically largest permutation you can make with **at most**  swaps. **
Sample Input 0**

```
STDIN       Function
-----       --------
5 1         n = 5, k = 1
4 2 3 5 1   arr = [4, 2, 3, 5, 1]

```

**Sample Output 0**

```
5 2 3 4 1

```

**Explanation 0**

You can swap any two numbers in  and see the largest permutation is

**Sample Input 1**

```
3 1
2 1 3

```

**Sample Output 1**

```
3 1 2

```

**Explanation 1**

With 1 swap we can get ,  and .  Of these,  is the largest permutation.

**Sample Input 2**

```
2 1
2 1

```

**Sample Output 2**

```
2 1

```

**Explanation 2**

We can see that  is already the largest permutation.  We don't make any swaps.

## Examples



## Constraints



## Solution

```cpp
// HackerRank Problem: Largest Permutation
// Link: https://www.hackerrank.com/challenges/largest-permutation/problem
// Difficulty: Easy
// Language: cpp

#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'largestPermutation' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts following parameters:
 *  1. INTEGER k
 *  2. INTEGER_ARRAY arr
 */

vector<int> largestPermutation(int k, vector<int> arr) {

    int n = arr.size();

    vector<int> pos(n + 1);

    // Store position of every value
    for (int i = 0; i < n; i++) {
        pos[arr[i]] = i;
    }

    // Try to put largest values from left to right
    for (int i = 0; i < n && k > 0; i++) {

        int required = n - i;

        // Already in correct position
        if (arr[i] == required) {
            continue;
        }

        // Find required value
        int j = pos[required];

        // Swap
        swap(arr[i], arr[j]);

        // Update positions
        pos[arr[j]] = j;
        pos[arr[i]] = i;

        k--;
    }

    return arr;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string first_multiple_input_temp;
    getline(cin, first_multiple_input_temp);

    vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));

    int n = stoi(first_multiple_input[0]);

    int k = stoi(first_multiple_input[1]);

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split(rtrim(arr_temp_temp));

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    vector<int> result = largestPermutation(k, arr);

    for (size_t i = 0; i < result.size(); i++) {
        fout << result[i];

        if (i != result.size() - 1) {
            fout << " ";
        }
    }

    fout << "\n";

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
