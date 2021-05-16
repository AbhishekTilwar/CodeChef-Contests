#include <iostream>
#define ll long long int
using namespace std;

int main()
{
    ll t,a,b,x;
    cin>>t;
    for(int i=0; i<t;i++){
        cin>>x>>a>>b;
        int sol=(a+(100-x)*b)*10;
            cout<<sol<<endl;
        }
        return 0;
}
