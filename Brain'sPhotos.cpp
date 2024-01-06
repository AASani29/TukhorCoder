#include <iostream>

using namespace std;

int main()
{
    int n,m,count=1, count1=1;

    cin>>n>>m;

    string s;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){

            char x;
            cin>>x;
            s.push_back(x);
            if(x=='C' || x=='M' || x=='Y'){
                count=0;
            }
            else{
                count1=0;
            }
        }
    }

    if(count==0 && count1==0){
        cout<<"#Color"<<endl;
    }
    else if(count==0){
        cout<<"#Color"<<endl;
    }
    else{
        cout<<"#Black&White"<<endl;
        }

    return 0;
}
