#include<bits/stdc++.h>
using namespace std;

int main()
{
   
    int t;
    cin>>t;
    while(t--)
    {
        char n;
        cin>>n;
        vector<char> c={'c','o','d','e','f','o','r','c','e','s'};
        vector<char> :: iterator it;
        bool flag = false;
        for(auto it=c.begin(); it!=c.end(); it++)
        {
            if(n==(*it)){
                flag = true;
                break;
            }
        }
        if(flag)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }

    }


}