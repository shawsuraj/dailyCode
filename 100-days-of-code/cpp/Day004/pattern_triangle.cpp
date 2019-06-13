#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;

  for(int i=0;i<n;i++){
    //space
    for(int j=0;j<n-i-1;j++){
      cout<<"\t";
    }

    //inc
    for(int j=0;j<i+1;j++){
      cout<<j+i+1<<"\t";
    }

    //dec
    for(int j=0;j<i;j++){
      cout<<2*i-j<<"\t";
    }

    cout<<endl;
  }
}
