#include <bits/stdc++.h>
using namespace std;

int min_price(int n, vector<int> arr){
    int mn=INT_MAX;
    int sum=0;
    for(int i=0; i<n; i++){
        sum+=arr[i];
        mn=min(mn, sum);
    }
    
    return mn;
    
}

int main() {
    int n; cin>>n;
    vector<int> arr;
    
    for(int i=0; i<n; i++){
        int x; cin>>x;
        arr.push_back(x);
    }
    cout<<min_price(n, arr);

    return 0;
}

/*
Input1: 5
Input2: (-39957,-17136,35466,21820,-26711}
Output: -57093
Explanation: The best time to buy the stock will be on Day 2 when the price of the stock will be -57093.
*/
