#include <iostream>
using namespace std;


int main()
{
    int t,D,d,A,B,C;
    cin>>t;
    while(t--){
        cin>>D>>d>>A>>B>>C;
        int ds=D*d;
        if(ds<10){
            cout<<0<<endl;
        }
        else if(ds>=10 && ds<21){
            cout<<A<<endl;
        }
        else if(ds>=21 && ds<42){
            cout<<B<<endl;
        }
        else { cout<<C<<endl;
        }
    } 
    return 0;
}
