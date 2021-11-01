#include <bits/stdc++.h>
using namespace std;
/*
s = "aab"
ans = ["aa", "b"], ["a", "a", "b"]
*/

vector<vector<string>> partition(string s)
{
    vector<vector<string>> ans;
    if (s.length() == 1)
    {
        ans.emplace_back(s);
        return ans;
    }
    if (s.length() == 2)
    {
        ans.emplace_back(s[0]);
        ans.emplace_back(s[1]);
        ans.emplace_back(s[0] + s[1]);
        return ans;
    }
};

int main()
{
    string s = "ab";

    vector<vector<string>> ans = partition(s);
}