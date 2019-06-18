#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	int n;
	int a[100000];
	for(int i=0;i<t;i++){
		cin>>n;
		int count=0;
		for(int j=0;j<n;j++){
			cin>>a[j];
		}
		for(int j=0;j<n-1;j++){
			for(int k=j+1;k<n;k++){
				if(a[j]>a[k]){
					count++;
				}
			}
		}
		cout<<count<<endl;

	}
	return 0;
}
