#include<iostream>
using namespace std;
int main(){
  int n,a=0,b=1;
  cin>>n;
  if(a<=n){
    cout<<a<<endl;
  }

  if(b<=n){
    cout<<b<<endl;
  }

  while(b<=n){
    cout<<b<<endl;
    int c=a+b;
    a=b;
    b=c;
  }
}
