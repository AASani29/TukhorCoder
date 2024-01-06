#include <iostream>

using namespace std;

int main()
{
   int t,n,b;
   cin>>t;
   while(t--){
    cin>>n>>b;
    int arr[n], count=1;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        count *=arr[i];

    }
    if(2023%count !=0){
        cout<< "NO" << endl;
    }
    else{
        cout<<"YES"<<endl;

        cout<<2023/count<< " "<<endl;
        b--;

        while(b--){
            cout<< 1 << " "<<endl;
        }

    }


    }

   return 0;
   }




