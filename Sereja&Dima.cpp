#include <iostream>

using namespace std;

int main()
{
    int n, s=0,d=0, count=0;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int x=n-1;
    for(int i=0;i<n;i++){
	if(i%2==0){
		if(arr[x]>arr[count])
		{
			s+=arr[x];
			--x;
		}
		else if(arr[x]<arr[count]){
		 s+=arr[count];
			++count;
		}
		else{
		s+=arr[count];
		}
	}
	else{
		if(arr[x]>arr[count])
		{
			d+=arr[x];
			--x;
		}
		else if(arr[x]<arr[count]){
		 d+=arr[count];
			++count;
		}
		else{
		d+=arr[count];
		}
    }
}
    cout<<s<<" "<<d;

    return 0;
}
