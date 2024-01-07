//logic behind this sln: odd+odd=even, even+even=even, odd+even=odd
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x, oddsum=0, evensum=0;
        cin>>n;
        for(int i=0; i<2*n; i++){
            cin>>x;
            if(x & 1){
                oddsum++;
            }
            else{
                evensum++;
            }
        }
        if(oddsum==evensum){
            cout<<"Yes"<<endl;
            continue;
        }
        cout<<"No"<<endl;
    }
    

}