#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int arr1[2],arr2[2];
        for(int i=0;i<2;i++){
            cin>>arr1[i];
        }
        for(int i=0;i<2;i++){
            cin>>arr2[i];
        }
        int b=0;
        for(int i=0;i<2;i++){
            int c=arr2[i]/arr1[i];
            b+=c;
        }
        cout<<b<<endl;
    }
    return 0;
}
