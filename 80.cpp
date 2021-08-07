#include <bits/stdc++.h>
using namespace std;
// [1,1,1,2,2,3]

int removeDulicate(vector<int> &arr){
    int n = arr.size();
    int s = 2, f = 2;
    while(f < n){
        if(arr[f] != arr[s-2]){
            arr[s++] = arr[f];
            
        }
        f++;
    }
    return s;
}

int main(){
    vector<int> nums = {1,1,1,2,2,3};
    cout<<removeDulicate(nums);

}