# Chief Hopper

**Difficulty:** Hard  
**Topics:** N/A  
**HackerRank URL:** [Chief Hopper](https://www.hackerrank.com/challenges/chief-hopper/problem)

## Problem Description

Chief's bot is playing an old DOS based game.  There is a row of buildings of different heights arranged at each index along a number line.  The bot starts at building  and at a height of .  You must determine the minimum energy his bot needs at the start so that he can jump to the top of each building without his energy going below zero.

Units of height relate directly to units of energy.  The bot's energy level is calculated as follows:

* If the bot's  is less than the height of the building, his

* If the bot's  is greater than the height of the building, his

**Example**

Starting with , we get the following table:

```
    botEnergy   height  delta
    4               2       +2
    6               3       +3
    9               4       +5
    14              3       +11
    25              2       +23
    48

```

That allows the bot to complete the course, but may not be the minimum starting value.  The minimum starting  in this case is .

**Function Description**

Complete the *chiefHopper* function in the editor below.

chiefHopper has the following parameter(s):

* *int arr[n]:* building heights

**Returns**

* *int:* the minimum starting

**Input Format**

The first line contains an integer , the number of buildings.

The next line contains  space-separated integers , the heights of the buildings.

**Constraints**

*

*  where

**Sample Input 0**

```
5
3 4 3 2 4

```

**Sample Output 0**

```
4

```

**Explanation 0**

If initial energy is 4, after step 1 energy is 5, after step 2 it's 6, after step 3 it's 9 and after step 4 it's 16, finally at step 5 it's 28. **
If initial energy were 3 or less, the bot could not complete the course.

Sample Input 1**

```
3
4 4 4

```

**Sample Output 1**

```
4

```

**Explanation 1**

In the second test case if bot has energy 4, it's energy is changed by (4 - 4 = 0) at every step and remains 4.

**Sample Input 2**

```
3
1 6 4

```

**Sample Output 2**

```
3

```

**Explanation 2**

```
botEnergy   height  delta
3           1       +2
5           6       -1
4           4       0
4

```

We can try lower values to assure that they won't work.

## Examples



## Constraints



## Solution

```cpp
// HackerRank Problem: Chief Hopper
// Link: https://www.hackerrank.com/challenges/chief-hopper/problem
// Difficulty: Hard
// Language: cpp

#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'chiefHopper' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

int chiefHopper(vector<int> arr) {
    int energy = 0;

    for (int i = arr.size() - 1; i >= 0; i--) {
        energy = (energy + arr[i] + 1) / 2;
    }

    return energy;
}
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

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

    int result = chiefHopper(arr);

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
