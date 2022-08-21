/* You are given an array  of  elements which is a permutation. You are required to perform the following operation exactly one time:

Select two different indices i, j and swap elements at these indices.
Your task is to find the lexicographically (Sorted Array) smallest array  you can achieve. 
# try to make similar to sorted array but only 1 Swap.
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long int


vector<ll> result(vector<ll> lax, vector<ll>& arr){

	ll n = arr.size();

	sort(lax.begin(), lax.end());

	ll j=0, t=1;

	for(int i=0; i<n; i++){
		if(arr[i]!=lax[i]){
			int p=i;
			while(arr[p]!=lax[i]){
				p++;
				if(arr[p]==lax[i])
				{
					arr[p]=arr[i];
					arr[i]=lax[i];
					break;
				}
			}
			t=0;
			break;
			
		}
		
	}

	if(t==0){
		return arr;
	}
	else{
		int temp=arr[n-1];
		arr[n-1]=arr[n-2];
		arr[n-2]=temp;
		return arr;
	}

}

int main(){
	int t;
	cin>>t;

	while(t--){
		ll n; cin>>n;
		vector<ll> arr, s;

		for(ll i=0; i<n; i++){
			ll x;
			cin>>x;
			s.push_back(x);
			arr.push_back(x);
		}

		result(s,arr);
		for(ll i=0; i<n; i++){
			cout<<arr[i]<<" ";
		}
		cout<<endl;
	}
}

/*
1
5
5 1 3 4 2
o/p: 1 5 3 4 2

Note: if its already in sorted manner then swap last two elements
*/
