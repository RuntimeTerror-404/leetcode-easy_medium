#include <bits/stdc++.h>
using namespace std;
#define ll long long int

bool isValid(string &str)
{
    if (str.length() > 3)
    {
        return false;
    }
    if (str.front() == '0' && str.length() > 1)
    {
        return false;
    }
    ll val = stoll(str);
    return val >= 0 && val <= 255;
}

void validIPAddress(string &str, vector<string> &res)
{
    for (ll i = 1; i <= 3 and i < str.length(); i++)
    {
        string first = str.substr(0, i);
        if (isValid(first))
        {
            for (ll j = 1; j <= 3 and i + j < str.length(); j++)
            {
                string second = str.substr(i, j);
                if (isValid(second))
                {
                    for (ll k = 1; k <= 3 and i + j + k < str.length(); k++)
                    {
                        string third = str.substr(i + j, k);
                        string fourth = str.substr(i + j + k);
                        if (isValid(third) and isValid(fourth))
                        {
                            res.emplace_back(first + "." + second + "." + third + "." + fourth);
                        }
                    }
                }
            }
        }
    }
}

int main()
{
    string str = "25525511135";
    // cin >> str;
    vector<string> res;

    validIPAddress(str, res);

    for (auto i : res)
    {
        cout << i << endl;
    }

    return 0;
}