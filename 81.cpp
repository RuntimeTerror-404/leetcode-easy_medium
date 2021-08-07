#include <bits/stdc++.h>
using namespace std;
// [2,5,6,0,0,1,2]

int booleanSearch(vector<int> &nums, int target)
{
    int len = nums.size();
    int left = 0, right = len - 1;

    while (left <= right)
    {
        if (nums[left] == target || nums[right] == target)
        {
            return true;
        }
        else if (target > nums[left])
        {
            while (left < right && nums[left] == nums[left + 1])
            {
                left++;
            }
            left++;
        }
        else if (target < nums[right])
        {
            while (left < right && nums[right] == nums[right - 1])
            {
                right--;
            }
            right--;
        }
        else
        {
            break;
        }
    }
    return false;
}

int main()
{
    vector<int> nums = {2, 5, 6, 0, 0, 1, 2};
    int target = 9;
    cout<<booleanSearch(nums, target);
}