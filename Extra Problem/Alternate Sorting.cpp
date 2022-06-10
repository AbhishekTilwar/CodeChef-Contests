#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin>>n;

    vector<int> arr;

    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }

    sort(arr.begin(), arr.end());

    for(int i=0; i<n/2; i++){
        cout<<arr[n-i-1];
        cout<<arr[i];

    }

}
