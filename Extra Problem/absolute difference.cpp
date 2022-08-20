#include<bits/stdc++.h>
using namespace std;

int operationstr(vector<int> arr,int num, int dif){
    int count=0;
    
    for(int i=0; i<arr.size(); i++){
            if(abs(arr[i]-num)<=dif){
                count++;
            }
            
    }
    return count;
}

int main(){
    int n;
    vector<int> arr;
    cin>>n;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    int num;
    cin>>num;
    int dif;
    cin>>dif;
    cout<<operationstr(arr, num, dif);
}

/*
12 3 14 56 77 13
13
2
o/p:
3
*/
