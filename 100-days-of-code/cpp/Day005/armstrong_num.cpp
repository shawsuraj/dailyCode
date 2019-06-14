#include<iostream>
#include<cmath>
using namespace std;
int main(){
  int n,nCount=0,sum=0;
  cin>>n;
  for(int i=n;i>=1;i=i/10){
    nCount++;
  }

  //cout<<nCount<<endl;  //CD

  int j=n;

  for(int i=10;j>1;j=j/10){
    int temp=0;
    temp=j%i;
    //cout<<temp<<endl<<pow(temp,nCount);  //CD

    sum= sum + pow(temp,nCount);

  }

  if(sum==n){
    cout<<"true";
  }
  else{
    cout<<"false";
  }
}
