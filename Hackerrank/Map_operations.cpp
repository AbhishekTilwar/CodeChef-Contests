#include<bits/stdc++.h>
using namespace std;


int main() {

    map<string, int> arr;
    int n; cin>>n;
    
    for(int i=0; i<n; i++){
        int m=0;
        cin>>m;
        string str; 
        cin>>str;
        switch(m){
            case 1: int marks; cin>>marks; arr[str]+=marks; break;
            case 2: arr.erase(str); break;
            case 3: cout<<arr[str]<<endl;
        }
    }
    
    return 0;
}
/*
Sample Input

7
1 Jesse 20
1 Jess 12
1 Jess 18
3 Jess
3 Jesse
2 Jess
3 Jess
Sample Output

30
20
0
*/
