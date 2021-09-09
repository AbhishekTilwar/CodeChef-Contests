#include <iostream>
using namespace std;

int main(){
    int t; // testcases
    cin>>t;

    while (t--)
    {
        int n,a,b;
        cin>>n>>a>>b;
        char s[n];
        int count0=0, count1=0;
        while(n--){
            int i=0;
            cin>>s[i];
            if(s[i]=='0'){
                count0+=1;
            }
            else if(s[i]=='1'){
                count1+=1;
            }
            i++;
        }        
        cout<<count0*a+count1*b<<endl;   
    }   
}
