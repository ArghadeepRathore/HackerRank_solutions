# Climbing the Leaderboard

**Difficulty:** Medium  
**Topics:** N/A  
**HackerRank URL:** [Climbing the Leaderboard](https://www.hackerrank.com/challenges/climbing-the-leaderboard/problem)

## Problem Description

An arcade game player wants to climb to the top of the leaderboard and track their ranking. The game uses [Dense Ranking](https://en.wikipedia.org/wiki/Ranking#Dense_ranking_.28.221223.22_ranking.29), so its leaderboard works like this:

* The player with the highest score is ranked number  on the leaderboard.

* Players who have equal scores receive the same ranking number, and the next player(s) receive the immediately following ranking number.

**Example**

 **

The ranked players will have ranks , , , and , respectively.  If the player's scores are ,  and , their rankings after each game are ,  and . Return .

Function Description**

Complete the *climbingLeaderboard* function in the editor below.

climbingLeaderboard has the following parameter(s):

* *int ranked[n]*: the leaderboard scores

* *int player[m]*: the player's scores

**Returns**

* *int[m]:* the player's rank after each new score

**Input Format**

The first line contains an integer , the number of players on the leaderboard. **
The next line contains  space-separated integers , the leaderboard scores in decreasing order.

The next line contains an integer, , the number games the player plays.

The last line contains  space-separated integers , the game scores.

Constraints**

*

*

*  for

*  for

* The existing leaderboard, , is in *descending* order.

* The player's scores, , are in *ascending* order.

**Subtask**

For  of the maximum score:

*

*

## Examples



## Constraints



## Solution

```cpp
// HackerRank Problem: Climbing the Leaderboard
// Link: https://www.hackerrank.com/challenges/climbing-the-leaderboard/problem
// Difficulty: Medium
// Language: cpp

#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'climbingLeaderboard' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY ranked
 *  2. INTEGER_ARRAY player
 */
vector<int> climbingLeaderboard(vector<int> ranked, vector<int> player) {
    // Remove duplicates
    vector<int> uniqueScores;
    uniqueScores.push_back(ranked[0]);

    for (int i = 1; i < ranked.size(); i++) {
        if (ranked[i] != ranked[i - 1]) {
            uniqueScores.push_back(ranked[i]);
        }
    }

    vector<int> ans;
    int j = uniqueScores.size() - 1;

    for (int score : player) {
        while (j >= 0 && score >= uniqueScores[j]) {
            j--;
        }
        ans.push_back(j + 2);
    }

    return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string ranked_count_temp;
    getline(cin, ranked_count_temp);

    int ranked_count = stoi(ltrim(rtrim(ranked_count_temp)));

    string ranked_temp_temp;
    getline(cin, ranked_temp_temp);

    vector<string> ranked_temp = split(rtrim(ranked_temp_temp));

    vector<int> ranked(ranked_count);

    for (int i = 0; i < ranked_count; i++) {
        int ranked_item = stoi(ranked_temp[i]);

        ranked[i] = ranked_item;
    }

    string player_count_temp;
    getline(cin, player_count_temp);

    int player_count = stoi(ltrim(rtrim(player_count_temp)));

    string player_temp_temp;
    getline(cin, player_temp_temp);

    vector<string> player_temp = split(rtrim(player_temp_temp));

    vector<int> player(player_count);

    for (int i = 0; i < player_count; i++) {
        int player_item = stoi(player_temp[i]);

        player[i] = player_item;
    }

    vector<int> result = climbingLeaderboard(ranked, player);

    for (size_t i = 0; i < result.size(); i++) {
        fout << result[i];

        if (i != result.size() - 1) {
            fout << "\n";
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
