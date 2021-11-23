#include <bits/stdc++.h>

using namespace std;

int main(){


    int t;
    cin>>t;

    while(t--){
        int n,count=0;
        cin>>n;
        int arr[n];

        int k=INT_MIN;
        int m=INT_MAX;

        for(int i=0; i<n; i++){
            cin>>arr[i];
            k=max(k,arr[i]);
            m=min(m,arr[i]);
        }
        
        cout<<k-m<<endl;

 

    }
}

/*
Sample Input 1 
2
3
1 3 1
3
2 2 2
Sample Output 1 
2
0
/*
