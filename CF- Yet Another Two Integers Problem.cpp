#include <iostream>

using namespace std;

int main()
{
    int t,a,b,count=0;
    cin>>t;
    while(t--){
            cin>>a>>b;

        if(b<a){
            swap(a,b);
        }

    count=b-a;
        if(count==0){
                cout<<0<<endl;
        }
        else{
            int x= count/10;
            if(count%10==0){
            cout<<x<<endl;
            }
            else{
                    cout<<x+1<<endl;
                }

            }
    }
    return 0;
}
