#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;

  for(int i=0;i<n;i++){
    cout<<i+1<<"\t";

    if(i==0){
      continue;
    }
    
    for(int j=0;j<i-1;j++){
      cout<<"0\t";
    }
    cout<<i+1<<"\t"<<endl;
  }
}
