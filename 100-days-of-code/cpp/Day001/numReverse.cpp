#include<iostream>
using namespace std;
int main(){
  int n,num=0;
  cin>>n;

  for(int i=10;n>0;n=n/10){
    int rem = n%i;
    num = num * 10 + rem;
    }

  cout<<num;
}
