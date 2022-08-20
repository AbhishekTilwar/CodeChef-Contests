/*The function accepts an integers sum and an integer array arr of size n. Implement the function to find the pair, (arr[j], arr[k]) where j!=k, 
Such that arr[j] and arr[k] are the least two elements of array (arr[j] + arr[k] <= sum) and return the product of element of this pair*/

#include<bits/stdc++.h>

using namespace std;

int result(vector<int> arr, int sum){
    sort(arr.begin(), arr.end());
    
    return arr[0]*arr[1];
}

int main(){
    int n, sum;
    vector<int> arr;
    cin>>sum;
    cin>>n;
    
    
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    
    cout<<result(arr, sum);
}

/*
4
6
9 8 3 -7 3 9
-21
*/
