#include<bits/stdc++.h>
using namespace std;

/*
– At least 4 characters
– At least one numeric digit
– At Least one Capital Letter
– Must not have space or slash (/)
– Starting character must not be a number*/

int operationstr(string str){
    int int_count=0;
    int alpha_count=0;
    int slash=0;
    
    if(str[0]-'0'>=0 && str[0]-'0'<=9){
        return 0;
    }
    for(int i=0; i<str.size(); i++){
        if(str[i]-'0'>=0 && str[i]-'0'<=9){
            int_count++;
            
        }
        if(str[i]>=65 && str[i]<=90){
            alpha_count++;
        }
        if(str[i]=='/' || str[i]==' '){
            return 0;
        }
    }
    
    if(int_count>=1 && alpha_count>=1 && str.size()>=4){
        return 1;
    }
    else{
        return 0;
    }
    
    
}

int main(){
    string str;
    cin>>str;
    cout<<operationstr(str);
}
