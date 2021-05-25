#include <iostream>
#include <climits>
#include<bits/stdc++.h>

#define ll long long int
using namespace std;

int main()
{
    ll n;
    cin>>n;
    ll arr[n];
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr, arr+n);
    ll maxno=arr[0];
    for (ll i=0;i<n;i++){
        //max
        ll temp=arr[i]*(n-i);
        maxno=max(maxno,temp);
        }
     cout<<maxno;
    return 0;
}



// Another Approach
#include <iostream>
#include <climits>
#define ll long long int
using namespace std;

ll sort(ll arr[],ll n){

    for (ll i=0;i<n;i++){
        for(ll j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
            ll temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
             }
        }
    }
}

int main()
{
    ll n;
    cin>>n;
    ll arr[n];
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,n);
    ll maxno=arr[0];
    for (ll i=0;i<n;i++){
        //max
        ll temp=arr[i]*(n-i);
        maxno=max(maxno,temp);
        }
        cout<<maxno;

   
    return 0;
}
