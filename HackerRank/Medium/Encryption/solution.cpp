// HackerRank Problem: Encryption
// Link: https://www.hackerrank.com/challenges/encryption/problem
// Difficulty: Medium
// Language: cpp

#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'encryption' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string encryption(string s) {

    // Remove spaces
    s.erase(remove(s.begin(), s.end(), ' '), s.end());

    int n = s.size();

    int rows = sqrt(n);
    int cols = ceil(sqrt(n));

    if (rows * cols < n)
        rows++;

    string ans = "";

    // Read column-wise
    for (int col = 0; col < cols; col++) {

        for (int row = 0; row < rows; row++) {

            int index = row * cols + col;

            if (index < n)
                ans += s[index];
        }

        if (col != cols - 1)
            ans += " ";
    }

    return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = encryption(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
