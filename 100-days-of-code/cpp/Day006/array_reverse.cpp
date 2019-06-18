#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int b[100];
    int a[100];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        b[i]=a[n-1-i];

       cout<<b[i]<<endl;
    }








	return 0;
}
