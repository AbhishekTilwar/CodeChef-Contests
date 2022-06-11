#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	
	while(t--){
	    int a, b;
	    cin>>a>>b;
	    
	    int temp=a;
	    while(temp!=b){
	        if(temp&1){
	            temp+=1;
	        }
	        else{
	            temp+=2;
	        }
	        
	        if(temp>b){
	            cout<<"NO"<<endl;
	            break;
	        }
	    }
	    if(temp==b){
	    cout<<"YES"<<endl;
	    }
	}
	return 0;
}
