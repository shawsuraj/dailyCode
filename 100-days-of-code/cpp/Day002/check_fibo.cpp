#include<iostream>
using namespace std;
int main(){
  int n,a=0,b=1;
  cin>>n;
  bool isFibo=false;

  if(a==n || b==n){
    isFibo = true;
  }

  else{
    while(b<=n){
      int temp = a;
      a=b;
      b=a+temp;
      if(a==n || b==n){
        isFibo = true;
      }
    }
  }

  if(isFibo==true){
    cout<<"Yes"<<endl;
  }
  else{
    cout<<"No"<<endl;
  }
}
