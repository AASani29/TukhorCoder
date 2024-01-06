#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    double b;
    long long int ans;
    cin>>a;
    while(a--){
        ans=0;
        cin>>b;
        ans=ceil((b/2)-1);
        cout<<ans<<endl;
    }
    return 0;
}