#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  for(int i=0;i<n;i++){
    for(int num=0;num<=i;num++){
      cout<<num+1;
    }
    for(int star=1;star<n-i;star++){
      cout<<"*";
    }
    cout<<endl;
  }
}
