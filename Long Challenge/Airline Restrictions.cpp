#include <iostream>

int main(){
    int t; // testcases
    cin>>t;

    while (t--)
    {
        int a,b,c,d,e;
        cin>>a>>b>>c>>d>>e;

        if(a+b<=d && c<=e){
            cout<<"YES";
        }
        else if(a+c<=d && b<=e){
            cout<<"YES";
        }
        else if(c+b<=d && a<=e){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }

    }

}
