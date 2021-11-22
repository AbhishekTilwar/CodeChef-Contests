#include <bits/stdc++.h>

using namespace std;

int main(){


    int t;
    cin>>t;

    while(t--){
        int k,n;
        cin>>n>>k;
        int sum=n, count=0;
        while(sum>0){
            sum=sum-k;
            count++;
        }
        cout<<count<<endl;
    }
}
