#include<iostream>
using namespace std;
int main(){
  int n,a=0,b=1;
  cin>>n;
  if(n==1){
    cout<<a;
  }
  else if(n==2){
    cout<<b;
  }

  else{
    int fCount = 2;
    while(true){
      int temp = a;
      //D cout<<temp<<endl;
      a=b;
      //D cout<<a<<endl;
      b=a+temp;
      //D cout<<b<<endl;
      if(fCount==n){
        break;
      }
      fCount++;
    }

    cout<<b;
  }
}
