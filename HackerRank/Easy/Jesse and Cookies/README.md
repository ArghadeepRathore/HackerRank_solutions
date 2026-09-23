# Jesse and Cookies

**Difficulty:** Easy  
**Topics:** N/A  
**HackerRank URL:** [Jesse and Cookies](https://www.hackerrank.com/challenges/jesse-and-cookies/problem)

## Problem Description

Jesse loves cookies and wants the sweetness of some cookies to be greater than value . To do this, two cookies with the least sweetness are repeatedly mixed. This creates a special combined cookie with:

*sweetness*  *Least sweet cookie*    *2nd least sweet cookie*).

This occurs until all the cookies have a sweetness  .

Given the sweetness of a number of cookies, determine the minimum number of operations required. If it is not possible, return .

**Example** **

The smallest values are .

Remove them then return  to the array.  Now .

Remove  and return  to the array.  Now .

Remove , return  and .

Finally, remove  and return  to .  Now .

All values are  so the process stops after  iterations.  Return .

Function Description** **
Complete the *cookies* function in the editor below.

*cookies* has the following parameters:

* *int k:* the threshold value

* *int A[n]:* an array of sweetness values

Returns**

* *int:* the number of iterations required or

**Input Format**

The first line has two space-separated integers,  and , the size of  and  the minimum required sweetness respectively.

The next line contains  space-separated integers, .

**Constraints**

 **

Sample Input**

```
STDIN               Function
-----               --------
6 7                 A[] size n = 6, k = 7
1 2 3 9 10 12       A = [1, 2, 3, 9, 10, 12]

```

**Sample Output**

```
2

```

**Explanation**

Combine the first two cookies to create a cookie with *sweetness*  =

After this operation, the cookies are .

Then, combine the cookies with sweetness  and sweetness , to create a cookie with resulting *sweetness*  =

Now, the cookies are .

All the cookies have a sweetness .

Thus,  operations are required to increase the sweetness.

## Examples



## Constraints



## Solution

```cpp20
// HackerRank Problem: Jesse and Cookies
// Link: https://www.hackerrank.com/challenges/jesse-and-cookies/problem
// Difficulty: Easy
// Language: cpp20

#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'cookies' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER k
 *  2. INTEGER_ARRAY A
 */

int cookies(int k, vector<int> A) {
    priority_queue<int, vector<int>, greater<int>> pq(A.begin(), A.end());

    int operations = 0;

    while (!pq.empty() && pq.top() < k) {
        if (pq.size() < 2) {
            return -1; 
        }

        int least = pq.top(); pq.pop();
        int secondLeast = pq.top(); pq.pop();

        int newSweet = least + 2 * secondLeast;
        pq.push(newSweet);

        operations++;
    }

    return operations;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string first_multiple_input_temp;
    getline(cin, first_multiple_input_temp);

    vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));

    int n = stoi(first_multiple_input[0]);

    int k = stoi(first_multiple_input[1]);

    string A_temp_temp;
    getline(cin, A_temp_temp);

    vector<string> A_temp = split(rtrim(A_temp_temp));

    vector<int> A(n);

    for (int i = 0; i < n; i++) {
        int A_item = stoi(A_temp[i]);

        A[i] = A_item;
    }

    int result = cookies(k, A);

    fout << result << "\n";

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
