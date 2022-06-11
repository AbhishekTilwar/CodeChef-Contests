#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    
    while(t--){
        float n, cost;
        double x;
        cin>>n;
        cin>>cost;
        
        x=n/6;
        cout<<ceil(x)*cost<<endl;
    }
	return 0;
}
