#include <iostream>
using namespace std;

int main()
{
    int t,n,x,k,s;
    cin>>t;
    while(t--){
        cin>>n>>x>>k;
        s=(n+1-x)%k;
        if(x%k==0||s==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}

