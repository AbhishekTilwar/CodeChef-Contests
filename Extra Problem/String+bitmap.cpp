#include<bits/stdc++.h>
using namespace std;

void operationstr(string str){
    int temp=str[0]- '0';
    for(int i=1; i<str.size(); i+=2){
        int q=str[i+1]- '0';
        switch(str[i]){
            case 'A':
            temp&=q; break;
            case 'B':
            temp|=q; break;
            case 'C':
            temp^=q; break;
        }
    }
    cout<<temp;
}

int main(){
    string str;
    cin>>str;
    operationstr(str);
}
