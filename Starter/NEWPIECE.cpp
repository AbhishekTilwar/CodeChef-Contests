#include<bits/stdc++.h>

using namespace std;
int c=0;

int color(int x, int y, int p, int q){
    if(x==p&& y==q){
        c=0;
        return c;
    }
     if((x+y)%2==0 && (p+q)%2==0){
            //both even
             c=2;
             return c;
        }
     if((x+y)%2==1 && (p+q)%2==1){
         c=2;
         //both odd
         return c;
     }
     else {
         c=1;
         return c;
        }

}

int main(){
    int t;
    cin>>t;

    while(t--){
        int x, y, p, q;
        cin>>x>>y>>p>>q;
        color(x, y, p, q);
        cout<<c<<endl;
       
    }
}
