//Ascending till k then descending
#include<bits/stdc++.h>

using namespace std;

void solve(vector<int> &arr, int k){
    //Before k
        sort(arr.begin(), arr.begin()+k);
    //After k
        sort(arr.begin()+k, arr.end(), greater<int>());
    
}

int main(){
    
    vector<int> arr;
    int n,k;
    cin>>n>>k;
    
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    
    solve(arr, k);
    
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}

/*
6 2
6 1 9 5 3 8

o/p:
1 6 9 8 5 3
*/
