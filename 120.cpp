#include <bits/stdc++.h>
using namespace std;

class solution
{
public:
    int triangle(vector<vector<int>> triangle)
    {
        int count = 0;
        for (int i = 0; i < triangle.size(); i++)
        {
            int x = *min_element(triangle[i].begin(), triangle[i].end());
            count += x;
        }

        return count;
    }
};

int main()
{
}