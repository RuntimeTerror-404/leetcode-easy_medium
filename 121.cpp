#include <bits/stdc++.h>
using namespace std;

int profit(vector<int> &stocks){
    int profit = 0;
    int current = 0;
    for(int i=stocks.size()-1; i>=1; --i){
        for(int j=i-1; j>=0; --j){
            current = stocks[i] - stocks[j];
            if(current > profit) profit = current;
        }
    }
    return profit;
    
};

int main(){
    vector<int> stocks = {7, 1, 5, 3, 6, 4};
    cout<<profit(stocks)<<endl;
}