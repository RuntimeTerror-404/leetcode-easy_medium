#include <bits/stdc++.h>
using namespace std;

void subsetsUtil(vector<int> &array, vector<vector<int>> &res, vector<int> &subset, int index)
{
    res.push_back(subset);
    for (int i = index; i < array.size(); i++)
    {
        subset.push_back(array[i]);

        subsetsUtil(array, res, subset, i + 1);

        subset.pop_back();
    }
    return;
}

vector<vector<int>> subsets(vector<int> &array)
{
    vector<int> subset;
    int index = 0;
    vector<vector<int>> res;

    subsetsUtil(array, res, subset, index);

    return res;
}

int main()
{
    vector<int> array = {1, 2, 2};

    vector<vector<int>> res = subsets(array);

    for (int i = 0; i < res.size(); i++)
    {
        for (int j = 0; j < res[i].size(); j++)
        {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}