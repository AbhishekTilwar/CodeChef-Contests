#include <bits/stdc++.h>
using namespace std;
string decToBinary(int n)
{
    int binaryNum[32];
 
    int i = 0;
    while (n > 0) {
 
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
 
    string str="";
    for (int j = i - 1; j >= 0; j--){
        str+=to_string(binaryNum[j]);
    }
    return str;
}
int check_palindrome(vector<int> arr){
    int count=0;
    for(int i=0; i<arr.size(); i++){
     string str="", original="";
     str=decToBinary(arr[i]);
    
     original=str;
     reverse(str.begin(), str.end());
     if(str==original){
         count++;
     }
    }
    return count;
}
int main() {
    // Write C++ code here
    vector<int> arr;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    
    cout<<check_palindrome(arr);

    return 0;
}

/*
5
1 2 3 4 5
3
*/
