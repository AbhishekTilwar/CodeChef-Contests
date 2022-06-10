#include<bits/stdc++.h>

using namespace std;

int main(){


    int d;

    int n;
    // number of items
    cin>>n;
    // money available
    cin>>d;
  
    // different products cost
    vector<int> arr;
    // each product should be purchased once
    for(int i=0; i<n; i++){

        int x;

        cin>>x;

        arr.push_back(x);

    }

    sort(arr.begin(), arr.end()); 

    int sum=0, count=0;

        while(sum<d){

            for(int j=0; j<n; j++){

                sum+=arr[j];

                if(sum>=d){

                break;

            }

            else{

                count++;

            }
        }
    }

    cout<<count<<endl;
}
