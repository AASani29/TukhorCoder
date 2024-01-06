#include<bits/stdc++.h>
using namespace std;

    int main(){
    int t;
    cin>>t;
    while(t--){
        int n, count1=0, count2=0;
        cin>>n;
        while(n%2 == 0)
        {
            count1++;
            n=n/2;
        }
        while(n%3 == 0)
        {
            count2++;
            n=n/3;
        }
 
        if(n == 1)
        {
            if(count1 <= count2)
            {
                int ans = min(count1,count2);
                count1-=ans;
                count2-=ans;
                ans += count2*2;
                cout<<ans<<endl;
            }   
            else{
                cout<<"-1"<<endl;
            }
        }
        else
            cout<<"-1"<<endl;
    }
 
    return 0;
}
