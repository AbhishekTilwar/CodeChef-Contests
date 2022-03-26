//Input-prime and use recursion till (input-prime=1) & count number of times function is call

#include <bits/stdc++.h>

using namespace std;

int prime(int n){
int count=0;

    //creating a vector of true values
vector<bool> arr;
for (int i = 0; i <= n; i++)
{
    arr.push_back(true);
}

    //
for (int i = 2; i*i <= n; i++) //i*i=n is equal to i=sqrt(n)
{
    for (int j = 2*i; j <= n; j+=i)
    {
           arr[j]=false;
     
    }
     
}

for (int i = 2; i <= n; i++)
{
    if(arr[i]==true){
        count++;

    }

}
  return count;
}


int main(){
int n, ans=1;
cin>>n;
 
  while(n!=1){
  int c=prime(n);
    n-=c;
    ans++;
  }

  cout<<ans;
}
