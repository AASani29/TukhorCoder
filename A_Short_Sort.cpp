#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        vector<char> a(3);
        cin>>a[0]>>a[1]>>a[2];

        if(a[0]=='a' || a[1]=='b' || a[2]=='c'){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

}