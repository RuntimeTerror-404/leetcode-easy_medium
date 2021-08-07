#include <bits/stdc++.h>
using namespace std;

void mergeArrays(vector<int> &m, vector<int> &n)
{
    vector<int> res;
    for (int i = 0; i < m.size(); i++)
    {
        res.push_back(m[i]);
    }
    for (int i = 0; i < n.size(); i++)
    {
        res.push_back(n[i]);
    }

    sort(res.begin(), res.end());

    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }
    // cout << endl;
}

int main()
{
    vector<int> m = {3, 0, 9, 3};
    vector<int> n = {0, 1, 5};
    mergeArrays(m, n);
}