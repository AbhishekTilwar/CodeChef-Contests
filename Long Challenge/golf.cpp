#include <iostream>

using namespace std;

int main()
{
    int t,n,x,k,s;
    cin>>t;
    while(t--){
        cin>>n>>x>>k;
        s=(n+1)%k;
       
        if(x%k==0||x%k==s)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}


//x%k==(n+1)%k
