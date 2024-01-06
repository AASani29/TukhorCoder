#include <iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if((s.size()%2)!=0){
            cout<<"NO"<<endl;
        }
        else{
            string p=" ",q=" ";


        for(int i=0; i<(s.size()/2); i++){
            p+=s[i];
        }

        for(int i=s.size()/2; i<s.size(); i++){
            q+=s[i];
        }

         if(p==q){cout<<"YES"<<endl;}
         else{cout<<"NO"<<endl;}
        }

   }

    return 0;
}
