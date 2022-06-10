#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;
    int k;
    cin>>n;
    cin>>k;
    int count=0;

    set<string> str;
    while(n--){
    for(int i=0; i<k; i++){
        string s;
        cin>>s;
        str.insert(s);

    }
    }

    cout<<str.size();

}
