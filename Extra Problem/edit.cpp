#include<bits/stdc++.h>
using namespace std;

https://prepinsta.com/accenture/coding/


int operationstr(vector<int> arr,int num, int dif){
    int count=0;
    
    for(int i=0; i<arr.size(); i++){
            int temp_dif=0;
            temp_dif=abs(arr[i]-num);
            if(temp_dif<=dif){
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
    int dif;
    cin>>dif;
    int num;
    cin>>num;
    cout<<operationstr(arr, num, dif);
}
