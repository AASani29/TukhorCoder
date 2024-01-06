#include <Bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int x, count1=0, count2=0;
        cin>>x;
        if(x%4==0){
            cout<<"YES"<<endl;
            for(int i=2; i<=x; i+=2){
                cout<<i<<" ";
                count1+=i;
            }
            for(int i=1; i<x-2; i+=2){
                cout<<i<<" ";
                count2+=i;
            }
             cout<<count1-count2<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}
