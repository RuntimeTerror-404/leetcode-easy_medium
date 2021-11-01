#include <bits/stdc++.h>
using namespace std;

class solution
{
public:
    int numTrees(int n)
    {
        if (n < 2)
            return 1;

        vector<int> s(n + 1, 0);
        s[0] = 1, s[1] = 1;
        for (int i = 2; i <= n; i++)
        {
            for (int j = 0; j < i; j++)
            {
                s[i] += s[j] * s[i - j - 1];
            }
        }
        return s[n];
    }
};

int main()
{
    int n = 3;
    solution obj;
    cout << obj.numTrees(n);
}