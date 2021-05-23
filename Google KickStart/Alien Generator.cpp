#include <iostream>

using namespace std;

void func(int temp, int g){
    for(int i=1;i<=g;i++){
        int count=i;
        int c=count;
        while(c<=g){
            if(c==g)
            {
                cout<<"yes";
                 temp++;
                 break;
            }
            else {
                c++;
            }
            
        }
        
    }
    cout<<temp;
}

int main()
{
    int g, temp;
    cin>>g;
    func(0,g);
    return 0;
}
