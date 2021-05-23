#include <iostream>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--){
        int p,G,c=0,s=0;
        int a[10];
        cin>>G>>p;

        for(int i=1;i<=10;i++){
            cin>>a[i];
        }
        for(int i=G+1;i<=10;i++){
            s+=a[i];
        }
        c=(s+p)/p;
            cout<<c<<" "<<(s + a[G] + p - 1) / p<<endl;
    }
    return 0;
}
