#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  for(int i=0;i<n;i++){
    int num,bitCount=0;
    cin>>num;
    while(num>0){
      if(num%2!=0){
        bitCount++;
      }
      num=num/2;
    }
    cout<<bitCount<<endl;
  }

}
