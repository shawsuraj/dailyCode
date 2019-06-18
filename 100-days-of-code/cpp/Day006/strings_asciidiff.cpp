#include<iostream>
using namespace std;
int main(){
	char arr[200];
	int ans;
	cin>>a;
	for(int i=1;arr[i]!='\0';i++){
		if(i==1){
		   int ans=arr[i]-arr[i-1];
		   cout<<a[i-1]<<ans<<arr[i];
		}
		else{
		     int ans=arr[i]-arr[i-1];
		       cout<<ans<<a[i];
		}
	}
}


//return 0
